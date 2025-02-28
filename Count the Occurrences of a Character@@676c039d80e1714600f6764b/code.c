// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
    char word[50];
    char a;
    scanf("%s",&word);
    scanf("%c",&a);
   // printf("%s %c",word,a);
    for(int i=0;i<strlen(word);i++){
        if(word[i]==a){
            ++count;
        }
    }
    printf("%d",count);
    return 0;
}