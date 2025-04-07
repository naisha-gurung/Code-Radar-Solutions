// Your code here...
int binarySearch(int arr[],int n){
    int start=0;
    int end=n;
    int temp=end/2;
    while(start<end ){

        temp=start+((end-start)/2);
    if(arr[temp]==target){
        return temp;
    }
    else if(arr[temp]<target){
        end=temp;
    }
    else{
        start=temp+1;
    }
    }
    return -1;
}