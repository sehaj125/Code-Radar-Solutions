#include <stdio.h>

int main() {
    unsigned int n,num,bit_value;
    scanf("%u %u",&num,&n);
    bit_value = (num>>n) & 1;
    printf("%u",bit_value);
    return 0;
}