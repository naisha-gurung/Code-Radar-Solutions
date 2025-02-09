#include <stdio.h>
struct student{
    int num;
    float m;
    char n[50];
};
int main() {
    int n;
    scanf("%d",&n);
    struct student s[n];
    float sum=0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",s[i].num,s[i].n,s[i].m);
        sum+=s[i].m;
    }
    float ans=sum/n;
    printf("Total Marks: %.2f\nAverage Marks: %.2f",sum,ans);
    return 0;
}