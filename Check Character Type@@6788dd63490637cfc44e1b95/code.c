#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if( c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a'|| c=='e'||c=='i'||c== 'o'|| c=='u'){
        printf("%s","Vowel");
    }
    else if( (c>='a' && c<='z') ||(c>='A' && c<='Z')){
        printf("%s","Consonant");
    }
    else if ( c<='9'&& c>='0' ){
        printf("%s","Digit");

    }
    else{
        printf("%s","Special Character");
    }
    return 0;
}