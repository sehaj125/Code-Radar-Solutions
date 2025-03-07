#include<stdio.h>
int main(){
    char ch = 'A';
    int n;
    scanf("%d",&n);
    for(int i = 0; i<= n;i++){
        for (int j = 0; j <= i; j++){
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}