// Your code here...
#include <stdio.h>
#include <string.h>


void compressString(char str[100],char compressed[100]) {;
    int n=strlen(str);
    int count=1;
    char y[10];
    compressed[0] = '\0';
    for (int i=1;i<n-1;i++){
        if(str[i]!=str[i+1]){      
             strncat(compressed,&str[i],1);
        if(count>1){
        snprintf(y, sizeof(y),"%d",count);
        strcat(compressed,y);}
        count=1;
        }
         else if (str[i]==str[i+1]){
             count+=1;
         }
         
    }
     if(str[n-1]!=str[n-2]){      
             strncat(compressed,&str[n-1],1);
      
        }
        else {
            count+=1;
            strncat(compressed,&str[n-1],1);
        if(count>1){
        snprintf(y, sizeof(y),"%d",count);
        strcat(compressed,y);}
        }
  
    if(strlen(compressed)>=strlen(str)){
        strcpy(compressed, str); 
    }
}