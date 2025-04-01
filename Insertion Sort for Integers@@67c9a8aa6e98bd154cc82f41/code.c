// Your code here...
void insertionSort(int arr[],int n){
    int curr, prev;
    for(int i=1;i<n;i++){
        curr=arr[i];
        prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            --prev;
        }
        arr[prev+1]=curr;

    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}