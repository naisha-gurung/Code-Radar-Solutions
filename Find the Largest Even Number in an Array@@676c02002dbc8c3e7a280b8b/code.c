#include <stdio.h>
int main() {
       int n;
    scanf("%d ",&n);
   int arr[n];
   int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            arr2[k]=arr[i];
            ++k;
        }
    }
    if(k==0){
        printf("%d",-1);
        return 0;
    }
    if(k==1){
        printf("%d",arr2[0]);
        return 0;
    }
 for(int i=0;i<k-1;i++){
        for(int j=0;j<k-i-1;j++){
            if (arr2[j]>arr2[j+1]){
                int a=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=a;
            }
        }
    }
  
    printf("%d",arr2[k-1]);
    return 0;
}