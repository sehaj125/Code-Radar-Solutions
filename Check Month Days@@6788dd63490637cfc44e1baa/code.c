#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);

    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31");
            break;
        case 4:
            printf("30");
            break;
        case 2:
            printf("28");
            break;
        default:
            printf("Invalid month");
            break;
    }
    return 0;
}