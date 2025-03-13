// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char line[100];
    char temp[100];
    char ans[100];
    ans[0]=' ';
    ans[1]='\0';
    fgets(line,sizeof(line),stdin);
    int min=strlen(line);
    int count=0;
    for(int i=0;i<strlen(line);i++){
        if(line[i]==' ' && count !=0){
            if(min>count){
                min=count;
                temp[count]='\0';
                ans=temp;
            }
            count=0;
        }
        else{
            temp[count]=line[i];
            ++count;
        }
    }
    printf("%s",ans);
    return 0;
}