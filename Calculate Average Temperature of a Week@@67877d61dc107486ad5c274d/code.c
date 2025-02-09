#include <stdio.h>
struct st{
    int b;
    char a[50];
};
int main() {
    struct st s[7];
    int sum=0;
    for(int i=0;i<7;i++){
        scanf("%s %d ",&s[i].a,&s[i].b);
        sum+=s[i].b;
    }
    float ans=sum/7;
    printf("Average Temperature: %.2f",ans);
    return 0;
}