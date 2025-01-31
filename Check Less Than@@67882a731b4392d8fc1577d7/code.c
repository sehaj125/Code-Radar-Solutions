#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1<num2){
        printf("True %d",num1,num1);
    }
    else{
        printf("False %d",num1,num2);
    }
    return 0;
}