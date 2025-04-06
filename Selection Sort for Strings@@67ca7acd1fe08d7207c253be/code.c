// Your code here...
#include <string.h>
void selectionSort(char arr[][100],int n){
    char temp2[100];
    int x;
    for(int i=0;i<n-1;i++){
       
        int temp=i;
        x=0;

        for(int j=i+1;j<n;j++){
            while(arr[temp][x]==arr[j][x]){
                ++x;
            }
            
            if(arr[temp][x]>arr[j][x]){
                
           // printf("\n:%c %c",arr[temp][x],arr[j][x]);
                temp=j;
            }
        }

        strcpy(temp2, arr[temp]);
        strcpy(arr[temp], arr[i]);
        strcpy(arr[i], temp2);
        printf("\n");
         for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
    }
}

void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}