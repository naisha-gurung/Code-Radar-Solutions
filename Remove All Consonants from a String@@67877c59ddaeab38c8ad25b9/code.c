// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char line[100];
    fgets(line,sizeof(line),stdin);
    for(int i=0;i<strlen(line);i++){
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U' || (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))) ){
            printf("%c",line[i]);
        }
    }
    return 0;
}