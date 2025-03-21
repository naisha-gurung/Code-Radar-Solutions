// Your code here...
int kthSmallest(int arr[],int n,int k){
    int curr;
    int prev;
    if(k>n){
        return -1;
    }
    for(int i=1;i<n;i++){
        curr=arr[i];
        prev=i-1;
        while(prev >=0 && arr[prev] > curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    return arr[k];
}