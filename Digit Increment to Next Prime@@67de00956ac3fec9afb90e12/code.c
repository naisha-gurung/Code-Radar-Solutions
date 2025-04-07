// Your code here...
int incrementToPrimeDigits(int n){
    if(n==0){
        return 0;
    }
    int ans=0,y;
    while(n>0){
        int x=n%10;
        if(x>=7){
            y=2;
        }
        else if(x>=5){
            y=7;
        }
        else if(x>=3){
            y=5;
        }
        else if(x==2){
            y=3;
        }
        else{
            y=2;
        }
        ans=(ans*10)+y;
        n=n/10;
    }
    int a,result=0;
    while(ans>0){
         a=ans%10;
         result=result*10+a;
         ans/=10;
    }
    return result;
}