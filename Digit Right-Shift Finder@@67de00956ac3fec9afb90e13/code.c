// Your code here...
int shiftedNumber(int n){
    int count=0;
    while(n>0){
        n/=10;
        ++count;
    }
    int a=n%10;
    int b=n/10;
    for(int i=0;i<n;i++){
        x*=10;
    }
    int ans=a*x+b;
    return ans;
}