// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[100],s[100];
    fgets(st, sizeof(st), stdin); 
    fgets(s, sizeof(s), stdin); 
    strcat(st,s);
    printf("%s",st);
    return 0;
}