// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char s[50],st[50];
    fgets(s,sizeof(s),stdin);
    int max=0;
    char ans;
    char temp[26]="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<strlen(s);i++){
        if (!(strchr(st,s[i]))){
            int count=0;
            for( int j=i+1;j<strlen(s);j++){
                if(s[j]==s[i]){
                    ++count;
                }
            }
            if(max<count){
                max=count;
                ans=s[i];
            }
            else if(max==count){
                char t[2],y[2];
                t[0]=ans;
                t[1]='\0';
                y[0]=s[i];
                y[1]='\0';

                if(strcspn(temp,t)>strcspn(temp,y)){
                    ans=s[i];
                }
            }
            st[strlen(st)] = s[i]; 
            st[strlen(st) + 1] = '\0';
        }
    }
    printf("%c",ans);
    return 0;
}