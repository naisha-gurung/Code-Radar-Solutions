#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if (max<arr[i]){
                max=arr[i];
        }
        else if (count==1){
            max=arr[i];
            count+=1;
        }
        else{
            count+=1;
        }
    }
    printf("%d", max);
    return 0;
}