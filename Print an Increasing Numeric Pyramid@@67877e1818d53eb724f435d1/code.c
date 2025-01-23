#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x=n-1;
    for(int i=1;i<=n;i++){
        for(int k=0;k<x;k++){
            printf(" ");
        }
        for(int j=1;j<i+1){
            printf("%d ",j);
        }
        printf("\n");
        x-=1;
    }
    return 0;
}