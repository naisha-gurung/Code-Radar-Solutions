// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int c=1;
    int count=0;
    while(!(c & a)){
        c=c<<1;
        ++count;
    }
    printf("%d",count);
    return 0;
}