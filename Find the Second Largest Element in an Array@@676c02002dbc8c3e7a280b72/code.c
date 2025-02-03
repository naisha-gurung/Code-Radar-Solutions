#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int index=0;
    for(int i=0;i<n;i++){
        if (max<arr[i]){
                max=arr[i];
                index=i;
        }
    }
    int j=0;
    for(int i=0;i<n-1;i++){
        if (i==index){
            continue;
        }
        arr2[j]=arr[i];
        ++j;
    }
    for(int i=0;i<n-1;i++){
        if(max<arr2[i]){
            max=arr2[i];
    
        }
    }

    
    return max;
}