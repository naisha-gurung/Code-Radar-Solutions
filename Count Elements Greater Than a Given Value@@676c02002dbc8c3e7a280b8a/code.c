#include <stdio.h>
int main() {
       int n;
    scanf("%d ",&n);
    int m;
    int count=0;
    scanf("%d ",&m);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            ++count;
        }
    }
    printf("%d",count);
    return 0;
}