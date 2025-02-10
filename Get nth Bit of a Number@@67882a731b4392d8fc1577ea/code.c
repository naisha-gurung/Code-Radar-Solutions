#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a>>b;
    if ( c & 1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}