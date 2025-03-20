// Your code here...
void fibonacciSeries(int n){
    int a =0;
    int b=1;
    if (n>=1){
        printf("0");
    }
     if (n>=2){
        printf(" 1");
    }
    if(n>2){
    for(int i=2;i<n;i++){
        printf(" %d",a+b);
        int c=b;
        b=a+b;
        a=c;
        
        
    }
    }
}