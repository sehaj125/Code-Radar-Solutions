#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        i*=n;
    }
    printf("%d x %d = ",i);
    return 0;
}