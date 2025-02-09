#include <stdio.h>
#include <string.h>
struct st{
    char b[50];
    float c;
    char a[50];
};
int main() {
    int n;
    scanf("%d",&n);
    struct st s[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",&s[i].a,&s[i].b,&s[i].c);
    }
    float s1=0;
    float s2=0;
    float s3=0;
    for(int i=0;i<n;i++){
        if(strcmp(s[i].b,"Standard")==0){
            s1+=s[i].c;
        }
        else if(strcmp(s[i].b,"Premium")==0){
            s2+=s[i].c;

         }
        else{
            s3+=s[i].c;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",s1,s2,s3);

    return 0;
}