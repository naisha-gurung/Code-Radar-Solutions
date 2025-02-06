#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Freezing");
        return 0;
    }
    printf("Not Freezing");
    return 0;
}