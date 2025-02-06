#include <stdio.h>
int main() {
    char c;
    scanf("%s",&c);
    char s1[3]={'R','G','Y'};
    char s2[3][15]={"Stop","Go","Slow Down"};
    int j=6;
    for(int i=0;i<3;i++){
        if (s1[i]==c){
            j=i;
        }
    }
    if(j==6){
        printf("Invalid input");
        return 0;
    }
    printf("%s",s2[j]);
    return 0;
}