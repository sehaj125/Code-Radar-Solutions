#include <stdio.h>

int main() {
    char operator ;
    double num1,num2;
    printf("%c",&operator);
    printf("%lf %lf",&num1,&num2);
    switch(operator){
        case '+':
            printf("%.2lf + %.2lf = %.2lf",num1+num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf",num1-num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf",num1*num2);
            break;
        case '/':
            if(num2 != 0){
                printf("%.2lf / %.2lf = %.2lf",num1/num2);
            }
            else{
                printf("Error! Division by zero");
            }
            break;
        default:
            printf("Error! Operator is not correct");
            break;
    }
    return 0;
}