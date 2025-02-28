// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char line[100],word[100];
    fgets(line,sizeof(line),stdin);
    scanf("%s",&word);
    int k=0;
    int j=0;
    for (int j=0;j<strlen(line);j++){
        if(word[k]==line[j])
        {
            int k=j;
            int temp=j+strlen(word)-1;
            for(int i=0;i<strlen(word);i++){
                if(word[i]!=line[k]){
                    break;
                }
                ++k;
            }
            if(temp==k-1){
                printf("Yes");
                return 0;
            }

        }
        
    }
    printf("No");
    return 0;
}