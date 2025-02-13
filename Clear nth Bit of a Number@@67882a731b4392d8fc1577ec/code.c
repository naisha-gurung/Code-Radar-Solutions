// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    // 1 1 1 c=11
    // 1 0 1
    // 0 1 0
    // 1 0 0
    // 1 0 1 0 
    // 1 1 0 1
    // 1 0 0 0 0 0 
    int c=1<<b;
    int d=a^c;
    printf("%d",d);
    

    
}