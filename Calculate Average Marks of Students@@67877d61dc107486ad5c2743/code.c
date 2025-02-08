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
    float sum=0.0;
     for(int i=0;i<n;i++){
        sum+=c[i];
     }
     float ans=sum/n;
        printf("Average Marks: %.2f",ans);
    return 0;
}