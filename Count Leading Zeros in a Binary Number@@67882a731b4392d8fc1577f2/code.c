// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int c=1<<31;
    if(a==0){
        printf("%d",32);
        return 0;
    }
    int count=32;
    while(!(c & a)){
        c=c>>1;
        --count;
    }
    printf("%d",count);
    return 0;
}