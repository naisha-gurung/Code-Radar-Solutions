#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>=60){
        printf("%s","Eligible");
    }
    else{
        printf("%s","Not Eligible");
    }
    return 0;
}