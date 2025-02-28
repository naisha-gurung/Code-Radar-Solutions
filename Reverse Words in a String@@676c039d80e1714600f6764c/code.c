// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[50];
    fgets(s,sizeof(s),stdin);
    for(int i=strlen(st)-1;i>=0;i--){
        printf("%c",st[i]);
    }
    return 0;
}