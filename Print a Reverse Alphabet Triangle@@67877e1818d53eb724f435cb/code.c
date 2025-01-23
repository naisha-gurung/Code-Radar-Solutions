#include <stdio.h>
int main() {
    char s[30]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            printf("%d ",s[j]);
        }
        printf("\n");
    }
    return 0;
}