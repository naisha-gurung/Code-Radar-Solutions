#include <stdio.h>


int main() {
    int age;
    char name[50];
    char hobby[50];
    scanf("%i",&age);
    scanf("%s",&name);
    scanf("%s",&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", name,age,hobby);
    return 0;
}