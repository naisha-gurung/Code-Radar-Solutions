#include <stdio.h>

int main() {
    int n;
    int x=1;
    scanf("%d",&n);
    int y=n;
    if(n==1){
        printf("*");
        return 0;
    }
    for (int i=0;i<n;i++){
       
        for(int j=1;j<y;j++){
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