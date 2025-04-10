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
    int x=0;
    int n=strlen(str);
    int freq[n];
    char arr2[n];
    int count=0;
    compressed[0] = '\0';
    for (int i=0;i<n;i++){
        count=0;
        //if number is not in arr2 check func will return true and count the freq
       if (check(arr2,str[i],x)){

        //Calculate freq
         for(int j=0;j<n;j++){
         if (str[i]==str[j]){
             count+=1;
         }
         }
         arr2[x]=str[i];
         freq[x]=count;
          x++;

        }
        count=0;
    }
    
    for(int i=0;i<x;i++){
        char y[10];
        strncat(compressed,&arr2[i],1);
        snprintf(y, sizeof(y),"%d",freq[i]);
        strcat(compressed,y);
    }
    if(strlen(compressed)>strlen(str)){
        strcpy(compressed, str); 
    }
}