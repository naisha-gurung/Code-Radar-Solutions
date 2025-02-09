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
    int c1=0;
    int c2=0;
    int c3=0;
    for(int i=0;i<n;i++){
        if(strcmp(s[i].b,"Basic")==0){
            s1+=s[i].c;
            ++c1;
        }
        else if(strcmp(s[i].b,"Standard")==0){
            s2+=s[i].c;
            ++c2;

         }
        else{
            s3+=s[i].c;
            ++c3;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue; %.2f;Premium: %d Users, Revenue: %.2f",c1,s1,c2,s2,c3,s3);

    return 0;
}