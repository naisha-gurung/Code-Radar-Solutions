// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char s1[100];
    char s2[100];
    scanf("%s",&s1);
    scanf("%s",&s2);
    for(int i=0;i<strlen(s2);i++){
        if (s1[0]==s2[i]){
            int x=i;
            int count=0;
            for(int j=1;j<strlen(s1);j++){
                ++x;
                if(x>=strlen(s1)){
                    x=0;
                }
                if(s1[x]!=s2[j]){
                    break;
                }
                else{
                    ++count;
                }
            }
            if(count==strlen(s2)-1){
                printf("Yes");
            }
        }
    }
    printf("No");
}