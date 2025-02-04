#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    for(int i=0;i<n;i++){
        if(b==arr[i]){
            printf("%d",i);
            return 0;
        }
    }
    printf("%d",-1);
    return 0;
}