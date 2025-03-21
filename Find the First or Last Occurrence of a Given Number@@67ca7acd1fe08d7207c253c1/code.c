// Your code here...
int findOccurrence(int arr[],int n, int target , char mode){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            if(count==0 && mode=='F'){
                return i;
            }
            ++count;
        }
        if(count>0 && arr[i]!=target){
            return i-1;
        }
    }
}