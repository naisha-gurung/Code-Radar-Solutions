#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("%s","Even");
    }
    else{
        printf("%s","Odd");
    }
    return 0;
}