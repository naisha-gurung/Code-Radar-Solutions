// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[50],s[90];
    scanf("%s %s",&st,&s);
    strcat(st,s);
    printf("%s",st);
    return 0;
}