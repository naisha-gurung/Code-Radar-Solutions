#include <stdio.h>
#include <stdbool.h>
bool check(arr2,temp){
    for(int i=0;i<n;i++){
        if (temp==arr[2]){
            return false;
        }
    }
    return true;

}
int main() {
    int n;
    int x=0;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (check(arr2,arr[i])){
        for(int j=0;j<n;j++){
        if (arr[i]==arr[j]){
            count+=1
        }
        }
        printf("%d %d",arr[i],count);}
        arr2[x]=arr[i];
        x+=1;
        count=0;
    }
    return 0;
}