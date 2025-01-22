#include <stdio.h>
int main() {
    char s[50]="ABCDEFGHIJKLMNOPQRTUVWXYZ";
    int n;
    scanf("%d",&n);
    int x=1;
    for (int i=1;i<=n;i++){
        for(int j=0;j<x;j++){
            printf("%c ",s[j]);
        }
        x+=1;
        printf("\n");
    }
    return 0;
}