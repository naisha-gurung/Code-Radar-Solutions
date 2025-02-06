#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=b-a;
    if(c>0){
        printf("s","Profit");
    }
    else if(c==0){
        printf("s","No Profit No Loss");
    }
    else{
        printf("%s","Loss");
    }
    return 0;
}