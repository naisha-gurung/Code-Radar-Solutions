#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("%s","Positive");
    }
    else if(n<0){
        printf("%s","Negative");
    }
    else{
        printf("%s","Zero");
    }
    return 0;
}