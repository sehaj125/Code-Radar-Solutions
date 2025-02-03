#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num % 5 == 0 && num % 11 == 0){
        printf("Divisile",num);
    }
    else{
        printf("Nor Divisible",num);
    }
    return 0;
}