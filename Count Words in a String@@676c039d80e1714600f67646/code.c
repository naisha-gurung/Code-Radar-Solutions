#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    int count=1;
    char nonwords[]=" ";
    scanf("%s",&ch);
    int n=strlen(ch);
    for(int i=0;i<n;i++){
       if(ch[i]==' '){
        ++count;
       }
    }
    if(ch[n-1]!=' '){
        ++count;
    }
    printf("%d",count);
    return 0;
}