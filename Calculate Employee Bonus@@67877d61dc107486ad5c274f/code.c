#include <stdio.h>
struct st{
    int a;
    float c;
    char b[50];
    float d;
};
int main() {
    int n;
    scanf("%d",&n);
    struct st s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].a,&s[i].b,&s[i].c);
    }
    for(int i=0;i<n;i++){
        if(s[i].c<50000.0){
            s[i].d=s[i].c/10;
        }
        else{
            s[i].d=s[i].c*(0.05);
        }
    }
     for(int i=0;i<n;i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",s[i].a,s[i].b,s[i].d);
    }
    return 0;
}