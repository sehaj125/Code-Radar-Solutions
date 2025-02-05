#include <stdio.h>
int isInRange(int num){
    return(num >= 1 && num <= 100);
}
int main() {
    int num;
    scanf("%d",&num);
    if(isInRange(num)){
        printf("In Range",num);
    }
    else{
        printf("Out of Range",num);
    }
    return 0;
}