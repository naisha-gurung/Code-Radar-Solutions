#include <stdio.h>

int main() {
    int n;
    int x=0;
    int y=n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        if (n==1){
            printf("*");
            break;
        }
        for (int j=0;j<y;j++){
            printf(" ");
        }
        for(int k=0;k<x;k++){
            printf("*");
        }
        printf("\n");
        x+=2;
        y-=1;
    }
    return 0;
}