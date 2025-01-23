#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x=n-1;
    for(int i=1;i<=n;i++){
        for(int l=0;l<x;l++){
            printf(" ");
        }
        for(int j=1;j<i+1;j++){
            printf("%d",j);
        }
        for(int k=i-1;k>0;k--){
            printf("%d",k);
        }
        x-=1;
        printf("\n");
    }
    return 0;
}