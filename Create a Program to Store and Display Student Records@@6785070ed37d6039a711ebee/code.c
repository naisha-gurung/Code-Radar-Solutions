#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a,c;
    char b[20];
    for(int i=0i<n;i++){
        scanf("%d %s %f",&a ,&b,&c );
        printf("Roll Number: %d, Name: %s, Marks: %.2f",a,b,c);
    }
    return 0;
}