#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x=2;
    int y=n;
    for( int i=0;i<n;i++){
        for(int k=0;k<y;k++){
            printf(" ");
        }
        for(int j=1;j<x;j++){
            printf("%d ",j);
        }
        printf("\n");
        x+=1;
        y-=1;
    }
    return 0;
}