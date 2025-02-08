#include <stdio.h>
int main() {
       int n;
    scanf("%d ",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d ",&m);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==m && ( a!=arr[i] b!=arr[j])){
                printf("%d %d\n",arr[i],arr[j]);
                a=arr[i];
                b=arr[i];
            }

        }
    }
    return 0;
}