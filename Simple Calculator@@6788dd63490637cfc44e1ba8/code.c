#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
         printf("%d",a+b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='/'){
        float m=a/b;
        // printf("%f",m);
    }
    else{
        printf("Error");
    }
    return 0;
}