#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x=n;
    int y=1;
    for (int i=0;i<n;i++){
        for(int j =0;j<x;j++){
            printf(" ");
        }
        for(int k=0;k<y;k++){
            printf("*");
        }
        printf("\n");
        y+=2;
        x-=1;
    }
    n-=1;
    int a=1;
    int b=y-4;
    for(int i=0;i<n;i++){
        for(int j=0;j<a;j++){
            printf(" ");
        }
        for(int k=0;k<b;k++){
            printf("*");
        }
        printf("\n");
        a+=1;
        b-=2;
    }
    return 0;
}