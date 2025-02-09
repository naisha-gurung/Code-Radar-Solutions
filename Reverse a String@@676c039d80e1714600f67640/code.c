#include <stdio.h>

int main() {
    char ch[50];
    scanf("%s",&ch);
    int n=sizeof(ch);
    int arr[n];
    for(int i=n-1;i>=0;i--){
        printf("%c",ch[i]);
    }

    return 0;
}