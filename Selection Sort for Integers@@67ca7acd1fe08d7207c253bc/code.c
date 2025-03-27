// Your code here...
selectionSort(int arr[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        temp=i;
        for(int j=i+1;j<n;j++){
            if(arr[temp]>arr[j]){
                temp=j;
            }
        }
        int temp2=arr[i];
        arr[i]=arr[temp];
        arr[temp]=temp2;
    }

}