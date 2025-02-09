#include <stdio.h>
int main() {
    int n;
    sacnf("%d",&n);
    struct student{
        int rn;
        char name[50];
        float m;
    }
    struct student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",s.rn[i],s.name[i],s,m[i]);
    }
    int x;
    scanf("%d",&x);
    printf("Roll Number: %d, Name: %s, Marks: %.2f",s.rn[x],s.name[x],s.m[x]);

    return 0;
}