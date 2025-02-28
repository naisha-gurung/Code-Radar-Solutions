// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char line[100],temp[100];
    fgets(line,sizeof(line),stdin);
    for(int i=0;i<strlen(line);i++){
        if(isupper(line[i])){
            char x[2];
            x[0]=toupper(line[i]);
            x[1]='\0';
            strcat(temp,x);
        }
        else{
            char x[2];
            x[0]=tolower(line[i]);
            x[1]='\0';
            strcat(temp,x);

        }
    }
    printf("%s",temp);
    return 0;
}