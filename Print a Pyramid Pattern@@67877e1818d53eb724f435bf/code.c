#include <stdio.h>

int main() {
    int n;
    int x=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (int j=n-1;j>=0;j--){
            printf(" ");
        }
        for(int k=0;k<x;k++){
            printf("*");
        }
        printf("\n");
        x+=2;
    }
    return 0;
}