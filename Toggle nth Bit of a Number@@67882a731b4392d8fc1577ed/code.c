// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    c=a>>b;
    if( (c & 1) == 0){
         int d = 1;
    int e = d << b;  // Shift 1 to the b-th position
    int ans = a | e; // Set the b-th bit of a
    printf("%d", ans);

    }
    else{
        int d = 1;
    int e = d << b;  // Shift 1 to the b-th position
    int ans = a ^ e; // Set the b-th bit of a
    printf("%d", ans);

    }
   
    return 0;
}