#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d ",arr);
    for(int i=0;i<n;i++){
        //scanf("%d ",&arr[i]);
        printf("%d",&arr[i]);
    }
    return 0;
}