// Your code here...
int caesarCipher(char message[] ,int shift ,char encrypted[]){
    for(int i=0;i<strlen(message);i++){
        if(isalpha(message[i])){
        encrypted[i]=message[i]+shift;
        }
    }
    return 0;
}