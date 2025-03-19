// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char w[100];
    fgets(w,sizeof(w),stdin);
    char temp[100];
    for(int i=0;i<strlen(w)-1;i++){
        int count=1;
        if(!(strchr(temp,w[i]))){
            for(int j=i+1;j<strlen(w);j++){
                if(w[i]==w[j]){
                    ++count;
                }
            }
            char temp1[2];
            temp1[0]=w[i];
            temp1[1]='\0';
            strcat(temp,temp1);
            printf("%c: %d",w[i],count);
        }
    }
    if(!(strchr(temp,w[strlen(w)-1]))){
        printf("%c: 1",w[strlen(w)-1]);
    }
    return 0;
    
}