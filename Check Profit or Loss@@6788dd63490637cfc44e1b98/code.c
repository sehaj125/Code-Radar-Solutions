#include <stdio.h>
int main() {
    int cost price,selling price;
    scanf("%f %f",&cost price,&selling price);
    if(selling price > cost price){
        printf("Profit",cost price,selling price);
    }
    else{
        printf("Loss",cost price,selling price);
    }
    return 0;
}