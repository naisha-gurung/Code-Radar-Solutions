// Your code here...
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int temp=i;
        for(int j=i+1;j<n;j++){
            if(arr[temp][0]>arr[j][0]){
                temp=j;
            }
        }
        strncpy(temp2, arr[temp], sizeof(temp2) - 1);
        temp2[sizeof(temp2) - 1] = '\0';
        arr[temp]=arr[i];
        arr[i]=temp2;
    }
}

void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}