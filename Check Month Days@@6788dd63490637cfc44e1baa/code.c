#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<1 || n>12){
        printf("Invalid");
        return 0;
    }
    int arr[12]={31,28,31,30,31,20,31,31,30,31,30,31};
    printf(arr[n-1]);
    return 0;
}