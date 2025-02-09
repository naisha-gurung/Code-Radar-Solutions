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
        float c=s[i].a*s[i].b;
        float d=2*(s[i].a+s[i].b);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i+1,c,d);
    }
    
    return 0;
}