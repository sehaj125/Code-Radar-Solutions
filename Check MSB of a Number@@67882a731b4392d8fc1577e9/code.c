#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%d",&num);
    if (num & (1 << 31)){
        printf("Set",num);
    }
    else{
        printf("Not Set",num);
    }
    return 0;
}