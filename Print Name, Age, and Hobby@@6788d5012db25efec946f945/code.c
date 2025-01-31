#include <stdio.h>
int main() {
    char name[50];
    int age;
    char hobby[100];
    printf("Name: %s",name);
    scanf("%s",name);
    printf("Age: %d",age);
    scanf("%d",&age);
    printf("Hobby: %s",hobby);
    scanf("%s",hobby);
    return 0;
}