#include <stdio.h>
#include <stdbool.h>
int main() {
   int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=1;
    int arr2[n];
    bool c=true;
    arr2[0]=arr[0];
    for(int i=1;i<n;i++){
        for(int j=0;j<k;j++){
            if(arr2[i]==arr[j]){
                c=false;
                break;
            }
        }
        if(c==true){
            arr2[k]=arr[i];
            ++k;
        }
        c=true;
    }


    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
    for(int i=0;i<k;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n%d",arr[1]);
    
    return 0;
}