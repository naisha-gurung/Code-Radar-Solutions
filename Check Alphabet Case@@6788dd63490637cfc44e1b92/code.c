#include <stdio.h>
int main() {
    char c;
    scanf("%d",&c);
    char a[10]="Uppercase";
    char b[10]="Lowercase";
    if(c>='A' && c<='Z'){
        printf("%s",a);
    }
    else if( c>='a' && c>='z'){
        printf("%s",b);
    }
    return 0;
}