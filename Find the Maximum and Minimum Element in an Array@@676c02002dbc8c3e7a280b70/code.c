#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int max=-999999;
    int min=999999;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i]
        }
    }
    printf("%d %d",max,min);
    return 0;
}