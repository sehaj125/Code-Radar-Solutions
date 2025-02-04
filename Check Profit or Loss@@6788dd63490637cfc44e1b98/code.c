#include <stdio.h>
int main() {
    int costprice,sellingprice;
    scanf("%f %f",&costprice,&sellingprice);
    if(sellingprice > costprice){
        printf("Profit",costprice);
    }
    else if{
        printf("Loss",sellingprice);
    }
    else{
        printf("No Profit No Loss");
    }

    return 0;
}