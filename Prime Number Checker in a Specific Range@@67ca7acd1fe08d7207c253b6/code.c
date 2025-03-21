// Your code here...
void printPrimesInRange(int a , int b){
    int c;
    for(int i=a;i<=b;i++){
        c=1;
        for(int j=2;j<i;j++){
            if (i%j==0){
                c=0;
            }
        }
        if(c){
            printf("%d ",i);
        }
    }
}