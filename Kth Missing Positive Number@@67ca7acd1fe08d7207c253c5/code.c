// Your code here...
int  findKthMissing(int arr[],int n,int k){
    int ans;
    int count=0;
    int j=0;
    for(int i=1;i<=arr[n-1];i++){
        if(i!=arr[j]){
            ++count;
            if(count==k){
                return i;
            }
        }
        ++j;
    }
    return arr[n-1]+1;

}