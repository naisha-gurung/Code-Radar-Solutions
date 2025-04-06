// Your code here...
#include <string.h>
void bubbleSort(char arr[][100],int n){
    char temp[100];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int x=0;
        while(arr[j][x]==arr[j+1][x]){
            ++x;
        }
            if(arr[j][x]>arr[j+1][x]){
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }

}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}