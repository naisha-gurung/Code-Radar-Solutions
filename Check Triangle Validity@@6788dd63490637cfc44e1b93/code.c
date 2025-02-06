#include <stdio.h>
int main() {
    int arr[3];
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            printf("%d %d %d\n",arr[i],arr[j],arr[3-(i+j)]);
            // if arr[i]+arr[j]<arr[3-(i+j)]{
            //    // printf("%s","Invalid");
            //     return 0;
            // }
        }


    }
    //printf("%s","Valid");
    return 0;
}