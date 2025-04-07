// Your code here...
void trackPlayerRanks(int ranked[],int n , int player[],int m,int result[]){
    int x=1;
    int rank[n];
    for(int i=0;i<n;i++){
        result[i]=0;
    }
    for(int i=0;i<n-1;i++){
        rank[i]=x;
        if(ranked[i+1]<ranked[i]){
            ++x;
        }
        
    }
    rank[n-1]=x;
    for(int i=0;i<n;i++){
        printf("%d ",rank[i]);
    }
    for(int j=0;j<m;j++){
        for(int i=n-1;i>=0;i--){
            printf("%d %d\n",ranked[i],player[j]);
            if(ranked[i]>player[j])
            {
                result[j]=rank[i]-1;
                break;
        }
        else if(ranked[i]==player[j]){
              result[j]=rank[i];
              break;
        }

        
    }
    if(result[j]==0){
        result[j]=1;
    }}


}