#include <stdio.h>
#include <string.h>
int main() {
    char ch[50],rev[50];
    scanf("%s",&ch);
    int n=strlen(ch);
    int j=0;
    for(int i=n-1;i>=0;i--){
        rev[j]=ch[i];
        ++j;
    }
    if(strcmp(rev,ch)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}