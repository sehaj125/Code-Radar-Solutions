#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n ; j++){
            printf(" ");
        }
        for(int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n";)
    }
    return 0;
}