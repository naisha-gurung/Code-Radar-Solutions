#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if (x==1){
                printf("1 ");
                x=0;
            }
            else{
                printf("0 ");
                x=1;
            }
        }
        printf("\n");

    }
    return 0;
}