#include <stdio.h>
struct st{
    int a;
    float c;
    char b[50];
    char d;
};
int main() {
    int m;
    scanf("%d",&m);
    struct st s[n];
    for(int i=0;i<m;i++){
        scanf("%d %s %f",&s[i].a,&s[i].b,&s[i].c);
    }
// for(int i=0;i<m;i++){
//     float n=s[i].c;
//      if (n>=90.0){
//         s[i].d='A';
//     }
//     else if(n>=80.0){
//        s[i].d='B';
//     }
//     else if(n>=70.0){
//        s[i].d='C';
//     }
//     else if(n>=60.0){
//         s[i].d='D';
//     }
//     else{
//       s[i].d='F';
//     }
// }
    return 0;
}