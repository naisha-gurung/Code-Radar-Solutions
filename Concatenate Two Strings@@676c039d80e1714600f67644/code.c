// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[100],s[100];
    gets(st);
    scanf("\n%s",&s);
    strcat(st,s);
    printf("%s",st);
    return 0;
}