#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 2;i<n;i++){
        if(n%i == 0){
            printf("Not Prime");
            return 0;
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}