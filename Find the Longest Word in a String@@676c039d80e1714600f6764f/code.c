// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char s[100],temp[100],word[100];
    fgets(s,sizeof(s),stdin);
    int count=0;
    int max=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=' '){
            ++count;
            char x[2];
            x[0]=s[i];
            x[1]='\0';
            strcat(temp,x);
        }
        else{
            if(max<count){
                max=count;
                strcpy(word, temp);
                temp[0]='\0';
                count=0;
            }
        }
    }
     if(max<count){
                max=count;
                word=temp;}
                printf("%s",word);
}