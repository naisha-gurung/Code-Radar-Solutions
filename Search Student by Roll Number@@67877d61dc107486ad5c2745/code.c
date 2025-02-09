#include <stdio.h>
 struct student{
        int rn;
        char name[50];
        float m;
    };
int main() {
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].rn,&s[i].name,&s[i].m);
    }
    int x;
    scanf("%d",&x);
    // printf("Roll Number: %d, Name: %s, Marks: %.2f",s[x].rn,s[x].name,s[x].m);
    return 0;
}