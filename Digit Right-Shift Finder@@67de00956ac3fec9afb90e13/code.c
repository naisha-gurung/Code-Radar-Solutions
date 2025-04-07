// Your code here...
int digitRightShift(int n){
    int m=n;
    int count=0;
    while(n>0){
        n/=10;
        ++count;
    }
    printf("%d",count);
    int a=m%10;
    int b=m/10,x=1;
    for(int i=0;i<count;i++){
        x*=10;
    }
    printf("%d %d %d",a,b,x);
    int ans=a*x+b;
    return ans;
}