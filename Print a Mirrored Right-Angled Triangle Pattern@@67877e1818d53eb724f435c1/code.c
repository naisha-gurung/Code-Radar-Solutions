#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n==1){
        printf("*");
        return 0;
    }
    int x=n-1;
    for (int i=1;i<=n;i++){
        for(int j=x;j>0;j--){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}