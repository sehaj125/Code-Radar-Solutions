#include <stdio.h>
int main() {
    char name[50];
    int age;
    char hobby[100];
    scanf("%49s",&name);
    scanf("%d",&age);
    scanf("%99s",&hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);

    return 0;
}