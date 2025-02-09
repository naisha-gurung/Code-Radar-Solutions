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
    
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if (s[j].c>s[j+1].c){
    //             int a=s[j];
    //             s[j]=s[j+1];
    //             s[j+1]=a;
    //         }
    //     }
    // }
    //  for(int i=0;i<n;i++){
    //     printf("Roll Number: %d, Name: %s, Marks: %.2f\n",s[i].a,s[i].b,s[i].c);
    // }

    return 0;
}