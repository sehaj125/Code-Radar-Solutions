#include <stdio.h>
int isInRange(int num){
    return(num >= 1 && num <= 100);
}
int main() {
    int num;
    scanf("%d",&num);
    if(isInRange(num)){
        printf("InRange",num);
    }
    else{
        printf("OutRange",num);
    }
    return 0;
}