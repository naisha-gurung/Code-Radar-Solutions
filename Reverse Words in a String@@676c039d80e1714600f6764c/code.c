// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char st[50];
    int k=0;
    int x;
    fgets(st,sizeof(st),stdin);
    for(int i=0;i<strlen(st);i++){
        if (st[i]==' ' || i==strlen(st)-1){
            if (i!=strlen(st)-1){
                x=i-1;
            }
            else{
                x=strlen(st)-1
            }
            for(int j=x;j>=k;j--){
        printf("%c",st[j]);
        
    }
    printf(" ");
    k=i+1;
        }
    }
    return 0;
}