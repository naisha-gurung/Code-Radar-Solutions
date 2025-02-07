#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    int max=arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            temp=arr[i]*arr[j];
            if(temp>max){
                max=temp;
            }
        }

    }
    
    printf("%d",x);
    return 0;
}