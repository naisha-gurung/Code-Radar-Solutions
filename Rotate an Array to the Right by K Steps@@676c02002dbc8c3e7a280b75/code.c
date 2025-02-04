#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    int j=0;
    int arr2[n];
    for(int i=b;i<n;i++){
        arr2[i]=arr[j];
        j++;
    }
    for(int i=0;i<b;i++){
        arr2[i]=arr[j];
        ++j;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}