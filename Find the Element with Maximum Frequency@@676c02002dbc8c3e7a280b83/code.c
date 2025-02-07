#include <stdio.h>
#include <stdbool.h>
bool check(int n;int arr[][],int j){
//     for(int i=0;i<j;i++){
//         if(arr[i][0]==n){
//             return true;
//         }
//     }
    return false;
}
int main() {
      int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n][2];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int j=0;
    for(int i=0:i<n;i++){
        if check(arr[i],arr2,j){
                continue;
            }
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                ++count;
            }
        }
        arr2[j][1]=count;
        arr2[j][0]=arr[i];
        ++j;
    }
    return 0;
}