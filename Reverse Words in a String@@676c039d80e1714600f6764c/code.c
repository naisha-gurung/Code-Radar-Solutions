// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[50];
    fgets(st,sizeof(st),stdin);
    for(int i=strlen(st)-1;i>=0;i--){
        printf("%c",st[i]);
    }
    return 0;
}