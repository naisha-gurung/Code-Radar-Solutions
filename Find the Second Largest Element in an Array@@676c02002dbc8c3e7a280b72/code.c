#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        return -1;
    }
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int index=0;
    for(int i=0;i<n;i++){
        if (max<arr[i]){
                max=arr[i];
                index=i;
        }
    }
    int j=0;
    for(int i=0;i<n;i++){
        if (i!=index){
            arr2[j]=arr[i];
            j+=1;

       }
       // printf("%d %d %d %d %d\n",i,index,j,arr[i],arr2[j-1]);
    }
    int max2=arr2[0];
    for(int i=0;i<n-1;i++){
        if(max<arr2[i]){
            max=arr2[i];
    
        }
    }
    if (max2==max){
        printf("%d",-1);
    }
    printf("%d",max);

    
    return 0;
}