// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//if number is present in the array returns false 
bool check(char arr2[],char temp,int n){
    if (n==0){
        return true;
    }
    for(int i=0;i<n;i++){
        if (temp==arr2[i]){
            return false;}}
    return true;
}
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
         else if (str[i]==str[j]){
             count+=1;
         }
         
    }
     if(str[n-1]!=str[n-2]){      
             strncat(compressed,&str[n-1],1);
      
        }
  
    if(strlen(compressed)>=strlen(str)){
        strcpy(compressed, str); 
    }
}