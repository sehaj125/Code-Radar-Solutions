#include <stdio.h>
int main() {
    int age;
    char name,hobby;
    scanf("%c %c",&name, &hobby);
    scanf("%d",&age);
    printf("Name: %c",name);
    printf("Age: %d",age);
    printf("Hobby: %c",hobby);

    return 0;
}