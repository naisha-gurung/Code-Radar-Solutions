#include <stdio.h>
int main() {
    char s[30]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    scanf("%d",n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++ ){
            printf("%c ",s[j]);
        }
        printf("\n");
    }
    return 0;
}