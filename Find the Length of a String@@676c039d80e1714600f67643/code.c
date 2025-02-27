// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[50];
    scanf("%s",&st);
    int n=strcspn(st,"\0");
    printf("%d",n);
    return 0;
}