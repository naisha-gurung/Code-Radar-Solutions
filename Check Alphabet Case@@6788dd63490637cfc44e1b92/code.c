#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    char a[10]="Uppercase";
    char b[10]="Lowercase";
    char d[20]="Not an alphabet";
    if(c>='A' && c<='Z'){
        printf("%s",a);
    }
    else if( c>='a' && c<='z'){
        printf("%s",b);
    }
    else{
        printf("%s",d);
    }
    return 0;
}