// Your code here...
int binarySearch(int arr[],int n,int target){
    int start=0;
    int end=n;
    int temp=end/2;
    while(start<end ){

        temp=start+((end-start)/2);
        printf("%d %d %d",start,end,temp);
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