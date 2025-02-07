#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    bool c;
    for(int i=0;i<n;i++){
        c=true;
        if(arr[i]==2){
            ++count;
            continue;
        }
        if(arr[i]==0 || arr[i]==1){
            continue;
        }
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                c=false;
                break;
            }
        }
            if(c==true){
                ++count;
            }
    }
    printf("%d",count);
    return 0;
}