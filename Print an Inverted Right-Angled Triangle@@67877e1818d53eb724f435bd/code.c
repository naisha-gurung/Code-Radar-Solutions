#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int x=n;
    for (int i=0;i<n;i++){
        for(int j=x;j>0;j--){
            printf("* ");
        }
        printf("\n");
        x-=1;
    }
    return 0;
}