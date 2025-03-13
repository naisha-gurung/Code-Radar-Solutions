// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char line[100];
    char ch;
    fgets(line,sizeof(line),stdin);
    scanf("%c",&ch);
    for(int i=0;i<strlen(line);i++){
        char c=line[i];
        if( c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o'|| c=='o'  ){
            printf("%c",ch);
        }
        else{
            printf("%c",line[i]);
        }
    }
    return 0;
}