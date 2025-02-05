#include <stdio.h>
int isGreaterOrEqual(int num1,int num2){
    return(num1 >= num2);
}
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(isGreaterOrEqual(num1,num2)){
        printf("Yes",num1,num2);
    }
    else{
        printf("No",num1,num2);
    }
    return 0;
}