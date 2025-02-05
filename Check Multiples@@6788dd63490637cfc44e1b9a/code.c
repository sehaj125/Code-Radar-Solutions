#include <stdio.h>
int isMultiple(int num1,int num2){
    if (num2 == 0){
        return 0;
    }
    return (num1 % num2 == 0);
}
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(isMultiple(num1,num2)){
        printf("Yes",num1,num2);
    }
    else{
        printf("No",num1,num2);
    }
    return 0;
}