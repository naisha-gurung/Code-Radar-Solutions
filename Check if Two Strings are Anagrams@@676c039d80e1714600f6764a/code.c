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
    if(strlen(s)!=strlen(st)){
        printf("No");
        return 0;
    }
     for(int i=0;i<strlen(s);i++){
        if (!(strchr(st,s[i]))){
            int count=0;
            for( int j=i+1;j<strlen(s);j++){
                if(s[j]==s[i]){
                    ++count;
                }
            }
            ans[k][0]=s[i];
            ans[k][1]=count;
            ++k;
            st[strlen(st)] = s[i]; 
            st[strlen(st) + 1] = '\0';
        }
    }
    for(int i=0;i<strlen(st);i++){
        if (!(strchr(st,st[i]))){
            int count=0;
            for( int j=i+1;j<strlen(st);j++){
                if(st[j]==st[i]){
                    ++count;
                }
            }
            ans2[k][0]=st[i];
            ans2[k][1]=count;
            ++k;
            st[strlen(st)] = st[i]; 
            st[strlen(st) + 1] = '\0';
        }
    }
    int rows = sizeof(ans) / sizeof(ans[0]);       
    int cols = sizeof(ans[0]) / sizeof(ans[0][0]);
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            printf("%s %s",ans[i][0],ans2[j][0] );
            printf("%s %s",ans[i][1],ans2[j][1]);
            if(ans[i][0]==ans2[j][0]){
                if (ans[i][1]!=ans2[j][1]){
                    printf("No");
                    return 0;
                }
            }
        }
    }
        printf("Yes");
    
    
    return 0;
}


