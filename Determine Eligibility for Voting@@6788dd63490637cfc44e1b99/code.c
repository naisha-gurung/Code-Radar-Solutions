#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>=18){
        printf("%s","Eligible");
    }
    else{
        printf("%s","Not Eligible");
    }
    return 0;
}