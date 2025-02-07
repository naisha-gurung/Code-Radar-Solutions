#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    bool c=true;
    for(int i=0;i<n;i++){
        // c=true;
        // for(int j=2;j<arr[i];j++){
        //     if(arr[i]%j==0){
        //         c=false;
        //         break;
        //     }
        // }
        //     if(c==true){
        //         ++count;
        //     }
    }
    printf("%d",count);
    return 0;
}