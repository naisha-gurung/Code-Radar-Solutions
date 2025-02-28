// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
    for(int i=0;i<strlen(s);i++){
        id(s[i]!=' '){
            printf("%c",s[i]);
        }
    }
    return 0;
}