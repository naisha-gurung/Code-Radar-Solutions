#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a;
    float c;
    char b[n][50];
    for(int i=0;i<n;i++){
       scanf("%d %s %f",&a ,&b[i],&c );
    }
    int max=arr[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            inex=i;
        }
    }
      printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",a,b[index],c);
    return 0;
}