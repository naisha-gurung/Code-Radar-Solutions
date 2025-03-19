// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char word[50];
    scanf("%s",word);
    char temp [50];
    int c;
    for(int i=0;i<strlen(word)-1;i++){
        c=1;
        if(!(strchr(temp,word[i]))){
            for(int j=i+1;j<strlen(word);j++){
                if(word[i]==word[j]){
                    char temp2[2];
                    temp2[0]=word[i];
                    temp2[1]='\0';
                    strcat(temp,temp2);
                    c=0;
                    break;
                }
            }
            if(c){
            printf("%c",word[i]);
            return 0;
        }
        }
        
    }
    if(!(strchr(temp,word[i]))){
        printf("%c",word[i]);
    }
    printf("-");
    return 0;
}