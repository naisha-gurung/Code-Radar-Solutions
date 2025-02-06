#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("%s","Equilateral");
    }
    else if( a==b || b==c|| c==a){
        printf("%s","Isosceles");
    }
    else{
        printf("%s","Scalene");
    }
    return 0;
}