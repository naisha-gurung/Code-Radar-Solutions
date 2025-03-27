// Your code here...
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int temp=i;
        for(int j=i+1;j<n;j++){
            if(arr[temp]>arr[j]){
                temp=j;
            }
        }
        int temp2=arr[temp];
        arr[temp]=arr[i];
        arr[i]=temp2;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
}