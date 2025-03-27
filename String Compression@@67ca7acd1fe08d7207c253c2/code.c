// Your code here...
#include <string.h>
void compressString(char str[],char compressed[]){
    char temp[100];
    char freq[100];
    int k=0;
    int count;
    for(int i=0;i<strlen(str)-1;i++){
        count=0;
        if(!(strchr(temp,str[i]))){
            for(int j=i+1;j<strlen(str);j++){
                if(str[j]==str[i]){
                    ++count;
                }

            }
            temp[k]=str[i];
            temp[k+1]='\0';
            freq[k]=count;
            ++k;
        }
    }
    if(!(strchr(temp,str[strlen(str)]))){
        temp[k]=str[strlen(str)];
            temp[k+1]='\0';
            freq[k]=1;
    }

    if(k*2<strlen(str)){
        int x=0;
        for(int i=0;i<k+1;i++){
            compressed[x]=temp[i];
            compressed[x]=freq[i];
            x+=2;
        }
    }
    else{
        for(int i=0;i<k+1;i++){
            compressed[i]=str[i];
        }
    }
    
}