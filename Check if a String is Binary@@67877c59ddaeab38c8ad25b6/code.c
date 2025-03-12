// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char s1[100];
    scanf("%s",&s1);
    for(int i=0;i<strlne(s1);i++){
        if(s1[i]!='0' && s1[i]!='1'){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}