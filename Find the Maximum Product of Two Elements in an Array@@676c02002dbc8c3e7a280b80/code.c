#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0){
            arr[i]=arr[i];
        }

    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int a=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=a;
            }
        }
    }
    int ans=arr[n-1]*arr[n-2];
    int ans2=arr[0]*arr[n-1];
    int x;
    if(ans>ans2){
        x=ans;
    }
    else{
        x=ans2;
    }
    printf("%d",x);
    return 0;
}