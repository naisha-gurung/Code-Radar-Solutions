#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       while(arr[i]!=0){
        count=count+(arr[i]%10);
        arr[i]=arr[i]/10;
       }
        printf("%d ",ans);
    }
    return 0;
}