#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    printf("%d",N);
    for (int i=0;i<N;i++){
        for(int j=N;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}