#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1 == num2){
        printf("Equal",num1,num2);
    }
    else if(num1 > num2){
        printf("First",num1,num2);
    }
    else if(num2 > num1){
        printf("Second"num1,num2);
    }
    return 0;
}