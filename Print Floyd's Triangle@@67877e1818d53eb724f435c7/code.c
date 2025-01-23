#include <stdio.h>
int main() {
    int x=1;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d ",x);
            x+=1;
        }
        printf("\n");
    }
    return 0;
}