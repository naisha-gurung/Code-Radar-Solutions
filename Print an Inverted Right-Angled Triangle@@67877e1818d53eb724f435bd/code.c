#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    x=n;
    for (int i=0;i<n;i++){
        for(int j=x;j>0;j--){
            printf("* ");
        }
        printf("\n");
        n-=1;
    }
    return 0;
}