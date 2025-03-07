// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    char word[50],temp[100];
    scanf("%s",&word);
    bool cond=true;
    for(int i=0;i<strlen(word)-1;i++){
        printf("%s",temp);
        if (!(strchr(temp,word[i]))){
        for(int j=i+1;j<strlen(word);j++){
            if(word[i]==word[j]){
                cond=false;
                char x[2];
                x[0]=word[i];
                x[1]='\0';
                strcat(temp,x);
                break;
            }
        }
        if (cond==true){
            printf("%c",word[i]);
            return 0;
        }}

    }
    if (!(strchr(temp,word[strlen(word)-1]))){
        printf("%c",word[strlen(word)-1]);
            return 0;
    }
    if (strchr(temp,word[strlen(word)-1])){
        printf("-");
        return 0;

    }
    else{
        printf("%c",word[strlen(word)-1]);
        
    }
    return 0;
}