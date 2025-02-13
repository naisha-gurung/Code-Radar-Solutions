// Your code here...
#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
int c=0;
int b=1;
while( !(a & b)){
    ++c;
    b<<c;

}
printf("%d",c);
return 0;
}