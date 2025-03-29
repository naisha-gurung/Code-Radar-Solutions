#include <stdio.h>

int main() {
    //taking input of array 
    int n,max;
scanf("%d ",&n);
int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
//max value
max=arr[0];
for(int i=0;i<n;i++){
    //compare all with 0th element
   if(max<arr[i]){
    max=arr[i];
    
   }
   }
  
int sec_max;
sec_max=arr[0];
for(int i=1;i<n;i++){
    
  //  printf("%d %d %d\n",max,sec_max,arr[i]);
  if(arr[i]<max && arr[i]>=sec_max)
   sec_max=arr[i];

 
    
   }
   
   printf("%d",sec_max);



  

 

    return 0;
}