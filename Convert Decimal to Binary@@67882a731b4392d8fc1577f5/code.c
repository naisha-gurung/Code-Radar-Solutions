// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d ",&a);
    if(a==0){
        printf("0");
        return 0;
    }
    int arr[32], i=0;
    while(a>0){
        arr[i]=a%2;
        a=a/2;
        ++i;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    
    return 0;

    
}