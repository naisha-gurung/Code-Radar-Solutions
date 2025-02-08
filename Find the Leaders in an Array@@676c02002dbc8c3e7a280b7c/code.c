#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    int k=0;
    int sum=arr[n-1];
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            arr2[k]=arr[i];
            ++k;
        }
        else if (arr[i]>=sum){
            arr2[k]=arr[i];
            ++k;
            sum=sum+arr[i];
        }
        else{
            sum=sum+arr[i];
        }
    }
    for(int i=k-1;i>=0;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}