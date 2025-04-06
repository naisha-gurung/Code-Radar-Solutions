// Your code here...
void insertionSort(char arr[],int n){
    char curr;
    int prev;
    for(int i=1;i<n;i++){
        curr=arr[i];
        prev=i-1;
        while(prev>=0 && curr<arr[prev]){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }   
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
}