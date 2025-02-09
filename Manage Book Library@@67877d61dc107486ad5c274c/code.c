#include <stdio.h>
struct st{
    char a[50];
    float c;
    char b[50];
};
int main() {
    int n;
    scanf("%d",&n);
    struct st s[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",&s[i].a,&s[i].b,&s[i].c);
    }
    int price[n];
    int j=0;
    float x;
    scanf("%f",&x);
    for(int i=0;i<n;i++){
        if(s[i].c>x){
            price[j]=i;
            ++j;
        }
    }
    printf("Books above price %.2f:\n",x);
    for(int i=0;i<j;i++){
        printf("Title: %s, Author: %s, Price: %.2f\n",s[price[i]].a,s[price[i]].b,s[price[i]].c);
    }
    return 0;
}