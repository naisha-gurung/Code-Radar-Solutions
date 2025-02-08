#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    float c[n];
    char b[n][50];
    for(int i=0;i<n;i++){
       scanf("%d %s %f",&a[i] ,&b[i],&c[i] );
    }
    float max=c[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(max<c[i]){
            max=c[i];
            index=i;
        }
    }
      printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",a[index],b[index],c[index]);
    return 0;
}