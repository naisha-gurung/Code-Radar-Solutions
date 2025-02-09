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
    float min=s[0].c;
    int x=0;
    for(int i=0;i<n;i++){
        if(min>s[i].c){
            min=s[i].c;
            x=i;
        }
    }
    // printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",s[x].a,s[i].b,s[i].c);
    return 0;
}