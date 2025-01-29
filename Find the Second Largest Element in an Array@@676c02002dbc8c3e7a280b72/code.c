#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if (max<arr[i]){
                max=arr[i];
        }
    }
    int temp=max;
    max=arr[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(max<arr[i] ){
            if(arr[i]==temp && count==1){
                max=arr[i];

            }
            else if(arr[i]==temp && count==0){
                count=1;
            }
            else{
                max=arr[i];
            }
        }
    }
    
    printf("%d", max);
    return 0;
}