#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if (arr[i]>0){
            arr2[j]=arr[i];
            ++j;
        }
    }
    int sum=0;
    int min=arr2[0];
    int max=arr2[0];
    for(int i=0;i<j;i++){
        sum+=arr2[i];
        if (arr2[i]<min){
            min=arr2[i];
        }
        else if(arr2[i]>max){
            max=arr2[i];
        }
    }
    int sum=0;
    for(int i=min;i<max+1;i++){
        sum2+=arr2[i];
    }
    printf("%d",sum2-sum);
    return 0;
}