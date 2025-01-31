#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    for(int i=2;i<n;i++){
        printf(":: %d %d %d",arr[i-2],arr[i-1],arr[i]);
        if (arr[i-2]<arr[i-1] && arr[i-1]>arr[i]){
            printf("%d",arr[i]);
            return 0;
        }
    }
    return 0;
}