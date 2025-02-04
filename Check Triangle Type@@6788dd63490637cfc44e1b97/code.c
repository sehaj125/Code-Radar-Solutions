#include <stdio.h>
int main() {
    float side1,side2,side3;
    scanf("%f %f %f",&side1,&side2,&side3);
    if (side1 == side2 && side2 == side3){
        printf("Equilateral",side1,side2,side3);
    }
    else if(side1 == side2 || side1 == side3 || side2 == side3){
        printf("Isosceles",side1,side2,side3);
    }
    else{
        printf("Scalene",side1,side2,side)
    }
    return 0;
}