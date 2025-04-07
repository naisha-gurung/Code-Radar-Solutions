// Your code here...
void trackPlayerRanks(int ranked[],int n , int player[],int m,int result[]){
    int x=1;
    int rank[n];
    for(int i=0;i<n;i++){
        rank[i]=0;
    }
    for(int i=0;i<n-1;i++){
        rank[i]=x;
        if(ranked[i+1]<ranked[i]){
            ++x;
        }
    }
    rank[n-1]=x;
    for(int j=0;j<m;j++){
        for(int i=n-1;i>=0;i--){
            if(ranked[i]>ranked[j])
            {
                result[j]=rank[i]-1;
        }
        else if(ranked[i]==ranked[j]){
              result[j]=rank[i];
        }
        
    }
    if(result[j]==0){
        result[j]=1;
    }}


}