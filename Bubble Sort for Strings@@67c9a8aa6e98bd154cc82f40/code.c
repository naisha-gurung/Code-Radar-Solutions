// Your code here...
#include <iostream>
void bubbleSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int x=0;
        while(arr[j][x]==arr[j+1][x]){
            ++x;
        }
        for(int j=0;j<n-i-1;j++){
            if(arr[j][x]>arr[j+1][x]){
                swap(arr[j][x],arr[j+1][x]);
            }
        }
    }

}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}