#include <stdio.h>
int isEligibleForSeniorDiscount(int age){
    return(age>=60);
}
int main() {
    int age;
    scanf("%d",&age);
    if(isEligibleForSeniorDiscount(age)){
        printf("Eligible",age);
    }
    else{
        print("Not Eligible",age);
    }
    return 0;
}