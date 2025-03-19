// Your code here...
#include <string.h>
#include <stdio.h>
int main(){
    char word[50];
    fget(word,sizeof(word),stdin);
    char temp[50];
    for(int i=0;i<strlen(word);i++){
        if(!(strchr(temp,word[i]))){
            printf("%c",word[i]);
            char temp1[2];
            temp[0]=word[i];
            temp[1]='\0';
            strcat(temp,temp1);
        }
    }
    return 0;
}