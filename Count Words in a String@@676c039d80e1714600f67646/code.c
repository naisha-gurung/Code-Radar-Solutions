#include <stdio.h>
#include <string.h>
int main() {
   int count=0;
   char s[50];
   fgets(s,sizeof(s),stdin);
   int j=0;
   while(j < strlen(s)){
    if(s[j]!=' '){
        ++count;
        ++j;
        while(s[j]!=' '| s[j]!="\0"){
            ++j;

        }
    }
    else{
        ++j;
    }

   }
   printf("%d",count);
    return 0;
}