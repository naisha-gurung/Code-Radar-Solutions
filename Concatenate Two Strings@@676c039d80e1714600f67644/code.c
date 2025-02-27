// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[100],s[100];
    scanf("%s %s",&st,&s);
    strcat(st,s);
    printf("%s",st);
    return 0;
}