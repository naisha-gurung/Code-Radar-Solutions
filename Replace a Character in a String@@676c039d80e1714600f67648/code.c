// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char s[50];
    fgets(s,sizeof(s),stdin);
    char a,b;
    char ans[50];
    scanf("%c %c",&a,&b);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==a){
            char temp[2];
            temp[0]=b;
            temp[1]='\0';
            strcat(ans,temp);
        }
        else{
            char temp[2];
            temp[0]=s[i];
            temp[1]='\0';
            strcat(ans,temp);
        }
    }
    printf("%s",ans);
    return 0;
}
