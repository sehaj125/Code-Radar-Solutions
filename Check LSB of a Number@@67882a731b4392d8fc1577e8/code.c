#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (num & 1){
        printf("Set",num);
    }
    else{
        printf("Not Set",num);
    }
    return 0;
}