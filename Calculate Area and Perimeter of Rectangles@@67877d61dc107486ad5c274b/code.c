#include <stdio.h>
struct st{
    int a;
    int b;
};
int main() {
    int n;
    scanf("%d",&n);
    struct st s[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&s[i].a,&s[i].b);
    }
    for(int i=0;i<n;i++){
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",i,s[i].a*s[i].b,2*(s[i].a+a[i].b));
    }
    
    return 0;
}