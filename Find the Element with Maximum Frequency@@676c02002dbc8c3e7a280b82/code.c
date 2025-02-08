#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
       int n;
    scanf("%d ",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n-1;i++){
        for(int j=0;j<k-i-1;j++){
            if (ar[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
    // int max=1;
    // for(int i=1;i<n;i++){
    //     int count=1;
    //     if(arr[i-1]==arr[i]){
    //         ++count;
    //     }
    //     else{
    //         if(max <count)
    //         {
    //             max=count;
    //         }
    //     }
    // }
    // printf("%d",max);
    return 0;
}