// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[50];
    fgets(st,sizeof(st),stdin);
    int n=strcspn(st,"\0");
    printf("%d",n);
    return 0;
}