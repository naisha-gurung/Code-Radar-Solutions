#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    int count=0;
    char nonwords[]=" .,\n\t;";
    scanf("%s",&ch);
    int n=strlen(ch);
    for(int i=0;i<n;i++){
        while(i<n){
            if(strchr(nonwords,ch[i]) != NULL){
                break;
            }
            i++;

        }
        count++;
        while(i<n){
            if(strchr(nonwords,ch[i]) == NULL){
                break;
            }
            i++;

        }
    }
    return 0;
}