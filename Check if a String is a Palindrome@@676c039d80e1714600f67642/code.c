#include <stdio.h>
#include <string.h>
int main() {
    char ch[50],rev[50];
    scanf("%s",&ch);
    int n=strlen(ch);
    for(int i=n-1;i>=0;i--){
        rev[i]=ch[i];
    }
    if(strcmp(rev,ch)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}