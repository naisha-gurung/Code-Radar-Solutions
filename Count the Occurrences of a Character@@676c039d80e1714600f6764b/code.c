// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
    char word[50],a;
    scanf("%s\n",&word);
    scanf("%c",&a);
    for(int i=0;i<strlen(word);i++){
        if(word[i]==a){
            ++count;
        }
    }
    printf("%d",count);
    return 0;
}