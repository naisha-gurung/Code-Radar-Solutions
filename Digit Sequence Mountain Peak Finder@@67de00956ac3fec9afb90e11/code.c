// Your code here...
int mountainPeak(int n){
    int m=n;
    int count=0;
    while(m>0){
        m/=10;
        ++count;
    }
    int ans;
    int c=0;
    while(n>0){
    int prev=n%10;
    n/=10;
    int curr=n%10;
    n/=10;
    if(prev>curr ){
        if(c==0){
            c=1;
            ans=prev;
        }
    }}
    if(c==0){
        return -1;
    }
    return ans;
}