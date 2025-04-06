// Your code here...
#include <string.h>
void insertionSort(char arr[][100],int n){
    char curr[100];
    int prev;
    for(int i=1;i<n;i++){
       strcpy(curr,arr[i]);
        prev=i-1;
        //printf("%s\n",curr);
        while(prev>=0 && arr[prev][0]>curr[0]){
            // printf("%c %c\n",arr[prev][0],arr[prev+1][0]);
            
            // printf("%s %s\n",arr[prev],arr[prev+1]);
            strcpy(arr[prev+1],arr[prev]);
            prev--;
            // printf("%s %s\n",arr[prev],arr[prev+1]);
            // printf("%d\n",prev);
        }
        //  printf("%s\n",arr[prev+1]);
        strcpy(arr[prev+1],curr);
    //     printf("\n");
    // for(int i=0;i<n;i++){
    //     printf("%s ",arr[i]);
    // }
    }
    
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}