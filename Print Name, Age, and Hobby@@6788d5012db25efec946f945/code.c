#include <stdio.h>
int main() {
    char name[50];
    int age;
    char hobby[100];
    scanf("%s",name);
    scanf("%d",&age);
    scanf("%s",hobby);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);

    return 0;
}