#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // if(n==0 || n==1){
    //     printf("2");
    //     printf("%d",arr[0]);
    //     return 0;
    // }
    // for(int i=2;i<n;i++){
    //     printf("1");
    //     if ((arr[i-2]<arr[i-1] && arr[i-1]>arr[i]) ){
    //         printf("%d",arr[i-1]);
    //         return 0;
    //     }
    // }
    printf("1");
    if (arr[0]>arr[1]){
        printf("%d",arr[0]);
        return 0;
    }
    // else if(arr[n-1]<arr[n]){
    //     printf("%d",arr[n]);
    //     return 0;
    // }
    printf("-1");
    return 0;
}