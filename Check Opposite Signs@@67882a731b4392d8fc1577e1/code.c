#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if((num1 < 0 && num2 > 0) || (num1>0 && num2<0)){
        printf("True",num1,num2);
    }
    else{
        printf("False",num1,num2);
    }
    return 0;
}