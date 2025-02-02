#include <stdio.h>

int main() {
    int num;
    scanf("%d",&year);
    if(year % 4 ==0  & year % 100 != 0) || (year % 400 == 0){
        printf("Leap Year",num);
    }
    else{
        printf("Not a Leap Year",num);
    }
    return 0;
}