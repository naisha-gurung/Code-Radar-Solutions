#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b=a>>31;
    // printf("%d\n",b);
    if(b &1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}