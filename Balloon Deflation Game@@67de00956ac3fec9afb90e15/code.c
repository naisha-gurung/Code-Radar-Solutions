// Your code here...
void deflateBalloons(int arr[],int n){
    int prev,curr;
    for(int i=1;i<n;i++){
        curr=arr[i];
        prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    int smallest_ballon;
    for(int i=n-1;i>=0;i--){
        if((i<n-1 && arr[i]!=arr[i+1]) || (i==n-1)){
        smallest_ballon=arr[i];
        for(int i=0;i<n;i++){
            arr[i]=arr[i]-smallest_ballon;

        }
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }}
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                ++count;
            }
        }
        printf("\n%d\n",count);
    }
}