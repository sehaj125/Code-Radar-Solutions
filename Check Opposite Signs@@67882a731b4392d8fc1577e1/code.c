#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1 == num2 || num1 != num2){
        printf("True",num1,num2);
    }
    else{
        printf("False",num1,num2);
    }
    return 0;
}