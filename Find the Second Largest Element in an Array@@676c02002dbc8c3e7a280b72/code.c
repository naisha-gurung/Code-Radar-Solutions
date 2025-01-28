#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    while(count1){
    for(int i=0;i<n;i++){
        if (max<arr[i]){
                max=arr[i];
        }
    }
    temp=max;
    for(int i=0;i<n;i++){
        if(max<arr[i] && arr!=temp){
            max=arr[i];
        }
    }
    }
    printf("%d", max);
    return 0;
}