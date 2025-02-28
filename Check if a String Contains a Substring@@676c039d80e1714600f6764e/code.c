// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char line[100],word[100];
    fgets(line,sizeof(line),stdin);
    scanf("%s",&word);
    int k=0;
    int j=0;
    while (j<strlen(line)){
        if(word[k]==line[j])
        {
            int temp=j+strlen(word)-1;
            for(int i=1;i<strlen(word);i++){
                if(word[i]!=line[j]){
                    break;
                }
                ++j;
            }
            if(temp==j-1){
                printf("Yes");
                return 0;
            }

        }
        ++j;
    }
    printf("No");
    return 0;
}