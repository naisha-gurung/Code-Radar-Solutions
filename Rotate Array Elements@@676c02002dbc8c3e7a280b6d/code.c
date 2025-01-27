#include <stdio.h>
int main() {
    int n;
    scanf("%d ",&n);
    printf("%d",n);
   int arr[n];
   int new_arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    printf("%d",b);
    // int j=0;
    // for(int i=b;i<n;i++){
    // new_arr[i]=arr[j];
    // ++j;
    // }
    // for(int i=0;i<j;i++){
    //     new_arr[i]=arr[j];
    //     ++j;
    // }
    for(int i=0;i<n;i++)
{
    printf("%d \n", arr[i]);
}    
return 0;
}