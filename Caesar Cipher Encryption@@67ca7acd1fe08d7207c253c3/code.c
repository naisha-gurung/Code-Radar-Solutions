// Your code here...
#include <string.h>
#include <ctype.h>
void caesarCipher(char message[] ,int shift ,char encrypted[]){
    for(int i=0;i<strlen(message);i++){
       if(isalpha(message[i])){
        if(!(isalpha(message[i]+shift))){
            encrypted[i]=message[i]+shift-26;
        }
        else{
        encrypted[i]=message[i]+shift;
        }
       }
       else{
        encrypted[i]=message[i];
       }
    }
}