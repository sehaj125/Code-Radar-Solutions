#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num > 0){
        printf("Positive",num);
    }
    else{
        printf("Negative",num);
    }
    return 0;
}