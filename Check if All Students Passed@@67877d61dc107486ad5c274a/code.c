##include <stdio.h>
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
    for(int i=0;i<n;i++){
        if(s[i].c<=50.0){
            printf("Not All Passed");
            return 0;
        }
    }
    printf("All Passed");
    return 0;
}