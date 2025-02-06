#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<0 || n>7 ){
        printf("Invalid");
    }
    char arr[7][20]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    printf("%s",arr[n-1]);
    
    return 0;
}