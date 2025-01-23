#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            x=0;
        }
        else{
            x=1;
        }
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