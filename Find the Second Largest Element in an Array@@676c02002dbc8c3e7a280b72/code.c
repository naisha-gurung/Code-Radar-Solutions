#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if (max<arr[i]){
                max=arr[i];
        }
        else if (count==1){
            max=arr[i];
            ++count;
        }
        else{
            ++count;
        }
    }
    printf("%s", welcome());
    return 0;
}