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
        printf("\n%d %c ",j,line[j]);
        if(word[k]==line[j])
        {

            int temp=j+strlen(word)-1;
            
            for(int i=0;i<strlen(word);i++){
                print("\n %c %c",word[i],line[j]);
                if(word[i]!=line[j]){
                    break;
                }
                ++j;
            }
            printf("\n%d %d",temp,j-1);
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