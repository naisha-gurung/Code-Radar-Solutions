#include <stdio.h>
struct st{
    int a;
    float c;
    char b[50];
};
int main() {
    int n;
    scanf("%d",&n);
    struct st s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].a,&s[i].b,&s[i].c);
    }
    float m;
    scanf("%f",&m);
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i].c>=m){
            ++count;
        }
    }
    printf("Count of students scoring above %.2f: %d",m,count);
       return 0;
}