// Your code here...
void factorialRange(int start ,int end){
    if(start<0 || end<0 || start>end){
        printf("Invalid range");
        return ;
    }
    int x=1;
    for(int i=0;i<=end;i++){
        if(i!=0){
        x*=i;
        }
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