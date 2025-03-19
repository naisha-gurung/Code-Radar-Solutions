// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char w[100];
    fgets(w,sizeof(w),stdin);
    for(int i=0;i<strlen(w)-1;i++){
        int count=1;
        if(!(strchr(temp,w[i]))){
            for(int j=i+1;j<strlen(w);j++){
                if(w[i]==w[j]){
                    ++count;
                }
            }
            printf("%c: %d",w[i],count);
        }
    }
    if(!(strchr(temp,w[strlen(w)-1]))){
        printf("%c: 1",w[i]);
    }
    return 0;
    
}