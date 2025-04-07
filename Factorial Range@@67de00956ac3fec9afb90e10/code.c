// Your code here...
void factorialRange(int start ,int end){
    int x=1;
    for(int i=1;i<=end;i++){
        x*=i;
        if(i>=start  && i<=end){
        if(i==0 || i==1){
            printf("1\n");
            
        }
        else{
        printf("%d\n",x);
        }
        }
    }
}