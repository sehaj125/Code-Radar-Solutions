#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(isPrime(num)){
        printf("Prime",num);
    }
    else{
        printf("Not Prime",num);
    }
    return 0;
    }  
    int isPrime(int num){
        if(num<=1){
            return 0;
        }
        for(int i = 2; i <num; i++){
            if(num%i == 0);
            return 0;
        }
        return 1;
}