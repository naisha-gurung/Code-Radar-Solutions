#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int a,b;
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }

        }
    }
    for(int i=0;i<n;i++){
        printf("\n%d ",arr[i]);
    }
    for(int i=1;i<n;i++){
     printf("%d ",arr[i]-arr[i-1]);
        if((arr[i]-arr[i-1])<min){
            min=arr[i]-arr[i-1];
            a=arr[i-1];
            b=arr[i];
        }
    }
    printf("%d %d",a,b);
    return 0;
}