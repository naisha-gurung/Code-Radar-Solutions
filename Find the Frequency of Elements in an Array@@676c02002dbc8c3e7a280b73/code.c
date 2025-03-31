#include <stdio.h>
#include <stdbool.h>

//if number is present in the array returns false 
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
        //if number is not in arr2 check func will return true and count the freq
       if (check(arr2,arr[i],x)){

        //Calculate freq
         for(int j=0;j<n;j++){
         if (arr[i]==arr[j]){
             count+=1;
         }
         }
        printf("%d %d\n",arr[i],count);

        }
        arr2[x]=arr[i];
        printf("%d %d\n",arr2[x],x);
         x++;
        count=0;
    }
    return 0;
}