#include <stdio.h>

void bubbleSort(int arr[], int n){
    int a;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++ ){
            if(arr[j+1]<arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }

}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}