// Your code here...
void factorialRange(int start ,int end){
    int x=1;
    for(int i=start;i<=end;i++){
        if(i==0 || i==1){
            printf("1\n");
        }
        x*=i;
        printf("%d\n",x);
    }
}