// Your code here...#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a^b;
    a=b;
    b=c^a;
    printf("%d %d",a,b);
    return 0;

    
}