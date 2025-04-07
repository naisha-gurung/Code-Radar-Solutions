// Your code here...
int findUnsortedSubarray(int arr[],int n){
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
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
    int c=1;
    int b=0;
    int a=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]){
           c=0;
           a=i;
            
        }
        if(c==0){
            if(arr[i]==arr2[i])
             b=i;
        }
    }
    printf("%d %d",b,a);
    return b-a;
}