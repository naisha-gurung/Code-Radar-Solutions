#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a;
    float c;
    char b[n][50];
    for(int i=0i<n;i++){
        scanf("%d %s %f",&a ,&b[i],&c );
        // printf("Roll Number: %d, Name: %s, Marks: %.2f",a,b[i],c);
    }
    return 0;
}