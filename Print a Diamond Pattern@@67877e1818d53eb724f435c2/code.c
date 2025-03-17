#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){printf(" ");}
        
        for(j=0;j<=i;j++){printf("*");}
        // for(j=i;j>0;j--){printf("*");}
        printf("\n");

    }
    //   for (i = n - 2; i >= 0; i--) {
    //     for (j = 0; j < n - i - 1; j++) {
    //         printf(" ");  // Print spaces
    //     }
    //     for (j = 0; j < (2 * i + 1); j++) {
    //         printf("*");  // Print stars
    //     }
    //     printf("\n");
    //               }

    return 0;
}