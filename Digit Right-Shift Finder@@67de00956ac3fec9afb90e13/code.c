// Your code here...
int digitRightShift(int n){
    int m=n;
    int count=0;
    while(n>0){
        n/=10;
        ++count;
    }
    int a=m%10;
    int b=m/10,x=1;
    for(int i=1;i<count;i++){
        x*=10;
    }
    int ans=a*x+b;
    return ans;
}