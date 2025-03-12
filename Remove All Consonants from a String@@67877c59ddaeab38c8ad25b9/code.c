// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char line[100];
    fgets(line,sizeof(line),stdin);
    for(int i=0;i<strlen(line);i++){
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]==' '){
            printf(line[i]);
        }
    }
}