// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[50];
    int k=0;
    fgets(st,sizeof(st),stdin);
    for(int i=0;i<strlen(st);i++){
        if (st[i]==' '){
            for(int j=i-1;j>=k;j--){
        printf("%c",st[j]);
        k=i+1;
    }
        }
    }
    return 0;
}