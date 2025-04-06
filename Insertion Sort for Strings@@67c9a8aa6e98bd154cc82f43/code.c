// Your code here...
#include <string.h>
void insertionSort(char arr[][100],int n){
    char curr[100];
    int prev;
    for(int i=1;i<n-1;i++){
        int x=0;
       strcpy(curr,arr[i]);
        prev=i-1;
        // while(arr[prev+1][x]==arr[prev][x]){
        //     ++x;
        // }
        while(prev>=0 && arr[prev][x]>arr[prev+1][x]){
            strcpy(arr[prev+1],arr[prev]);
            prev--;
        //     while(arr[prev+1][x]==arr[prev][x]){
        //     ++x;
        // }
        }
        strcpy(arr[prev+1],curr);
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}