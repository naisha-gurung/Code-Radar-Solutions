#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char st[20]="Not Divisible";
    char s2[10]="Divisible";
    if(n%5==0 && n%11==0){
        printf("%s",s2);
        return 0;
    }
    printf("%s",st);
    return 0;
}