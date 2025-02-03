#include <stdio.h>
#include <stdbool.h>
bool check(int arr2[],int temp,int n){
    if (n==0){
        return true;
    }
    for(int i=0;i<n;i++){
        if (temp==arr2[i]){
            return false;}}
    return true;
}
int main() {
    int n;
    scanf("%d",&n);
    int x=0;
    int arr[n];
    int arr2[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        count=0;
       if (check(arr2,arr[i],x)){
         for(int j=0;j<n;j++){
         if (arr[i]==arr[j]){
             ++count
         }
         }
        printf("%d %d",arr[i],count);
        }
        arr2[x]=arr[i];
         x++;
        count=0;
    }
    return 0;
}