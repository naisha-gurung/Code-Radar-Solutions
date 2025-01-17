#include <stdio.h>


int main() {
    int a;
    int b;
    int c;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    float temp=(a+b+c)/3.0;
    printf("Average: %.2f", temp);
    return 0;
}