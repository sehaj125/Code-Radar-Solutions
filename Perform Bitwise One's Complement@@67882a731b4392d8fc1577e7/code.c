#include <stdio.h>
int main() {
    int num,complement;
    scanf("%d",&num);
    complement = ~num;
    printf("%d",complement);
    return 0;
}