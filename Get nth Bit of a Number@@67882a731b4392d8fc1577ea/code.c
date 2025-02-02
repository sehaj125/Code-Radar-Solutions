#include <stdio.h>

int main() {
    unsigned int n,num,bit-value;
    scanf("%u %u",&num,&n);
    bit-value = (num>>n) & 1;
    printf("%u",bit-value);
    return 0;
}