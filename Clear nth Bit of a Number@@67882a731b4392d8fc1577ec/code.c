// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    // 1 1 1 c=11
    // 1 0 1
    // 0 1 0
    int c=a>>b;
    int d,ans;
    if ( c & 1){
        d=0;
       
    }
    else{
        d=1;
         d<<b;
        ans=(a | d);
        printf("%d",ans);
    }

    
}