#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    scanf("%s",&ch);
    int n=strlen(ch);
    for(int i=n-1;i>=0;i--){
        printf("%c",ch[i]);
    }

    return 0;
}