// Your code here...
#include <string.h>
#include <ctype.h>
void caesarCipher(char message[] ,int shift ,char encrypted[]){
    for(int i=0;i<strlen(message);i++){
       if(isalpha(message[i])){
        // if(!(isalpha(message[i]+shift))){
        //     encrypted[i]=message[i]+shift-26;
        // }
        // else{
        // encrypted[i]=message[i]+shift;
        // }
        char base = isupper(message[i]) ? 'A' : 'a';  // Determine base
            encrypted[i] = (message[i] - base + shift) % 26 + base;  // Shift with wraparound
        else {
            encrypted[i] = message[i];  // Keep non-letters unchanged
        }
       }
       else{
        encrypted[i]=message[i];
       }
    }
     encrypted[length] = '\0';
}