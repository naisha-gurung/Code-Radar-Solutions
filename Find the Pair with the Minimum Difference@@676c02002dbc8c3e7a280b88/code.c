#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d",-1);
        return 0;
    }
    int arr[n];
    int a,b;
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
  
   
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }

        }
    }
     int min=arr[1]-arr[0];
     a=arr[0];
     b=arr[1];    
    for(int i=1;i<n;i++){
        if((arr[i]-arr[i-1])<min){
            min=arr[i]-arr[i-1];
            a=arr[i-1];
            b=arr[i];
        }
    }
    printf("%d %d",a,b);
    return 0;
}