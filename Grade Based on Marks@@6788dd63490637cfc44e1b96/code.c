#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n>=90){
        printf("%c",'A');
    }
    else if(n>=80){
        printf("%c",'B');
    }
    else if(n>=70){
        printf("%c",'C');
    }
    else id(n>=60){
        printf("%c",'D');
    }
    // else{
    //     printf("%c",'F');
    // }
    return 0;
}