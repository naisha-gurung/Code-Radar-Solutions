#include <stdio.h>
int main() {
    int n;
    int b;
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        b=n*i;
        printf("%d x %d = %d ",n,i,b);
        printf("\n");
    }
    return 0;
}