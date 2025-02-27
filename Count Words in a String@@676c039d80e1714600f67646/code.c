#include <stdio.h>
#include <string.h>
int main() {
   int count=0;
   char s[100];
   fgets(s,sizeof(s),stdin);
   for( int i=0;i<strlen(s);i++){
    if (s[i]==' '){
        ++count;
    }
   }
   if(s[strlen(s)-1]!=' '){
    ++count;
   }
   printf("%d",count);
    return 0;
}