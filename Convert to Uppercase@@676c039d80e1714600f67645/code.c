// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char word[50];
    scanf("%s",&word);
    char ans[50];
    for(int i=0;i<strlen(word);i++){
        if (((int)word[i])<123 && ((int)word[i])>97){
            char temp[2];
            int b=(int)word[i]+32;
            temp[0]=(char)b;
            temp[1]='\0';
            strcat(ans,temp);
        }
    }
    printf("%s",ans);
    return 0;
}