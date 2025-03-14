// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char s[50],st[50];
    char ans[50][2];
    char ans2[50][2];
    int k=0;
    fgets(s,sizeof(s),stdin);
    fgets(st,sizeof(st),stdin);
  
   
    s[strcspn(s, "\n")] = '\0';
    st[strcspn(st, "\n")] = '\0';
     printf("%d %d",strlen(s),strlen(st));
    if(strlen(s)!=strlen(st)){
        printf(":No");
        return 0;
    }
    // char temp[100];
    // temp[0]='\0';

    //  for(int i=0;i<strlen(s);i++){
    //     if (!(strchr(temp,s[i]))){
    //         int count=0;
    //         for( int j=i+1;j<strlen(s);j++){
    //             if(s[j]==s[i]){
    //                 ++count;
    //             }
    //         }
    //         ans[k][0]=s[i];
    //         ans[k][1]=count;
    //         ++k;
    //         temp[strlen(temp)] = s[i]; 
    //         temp[strlen(temp) + 1] = '\0';
    //     }
    // }
    // char temp2[100];
    // temp2[0]='\0';
    // k=0;

    // for(int i=0;i<strlen(st);i++){
    //     if (!(strchr(temp2,st[i]))){
    //         int count=0;
    //         for( int j=i+1;j<strlen(st);j++){
    //             if(st[j]==st[i]){
    //                 ++count;
    //             }
    //         }
    //         ans2[k][0]=st[i];
    //         ans2[k][1]=count;
    //         ++k;
    //         temp2[strlen(temp2)] = st[i]; 
    //         temp2[strlen(temp2) + 1] = '\0';
    //     }
    // }
    // int rows = sizeof(ans) / sizeof(ans[0]);      
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<rows;j++){
    //         printf("%s %s",ans[i][0],ans2[j][0] );
    //         printf("%s %s",ans[i][1],ans2[j][1]);
    //         if(ans[i][0]==ans2[j][0]){
    //             if (ans[i][1]!=ans2[j][1]){
    //                 printf("No");
    //                 return 0;
    //             }
    //         }
    //     }
    // }
    //     printf("Yes");
    
    
    return 0;
}


