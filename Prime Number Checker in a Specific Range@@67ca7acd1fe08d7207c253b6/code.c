// Your code here...
void printPrimesInRange(int a , int b){
    int c,count=0;

    for(int i=a;i<=b;i++){
        c=1;
        for(int j=2;j<i;j++){
            if (i%j==0){
                c=0;
            }
        }
        if(c && i>1 ){

            printf("%d ",i);
            ++count;
        }
    }
    if(count==0){
        printf("No prime numbers");
    }
}