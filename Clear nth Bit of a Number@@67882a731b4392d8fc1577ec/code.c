#include <stdio.h>

// Function to clear the nth bit of a number
unsigned int clearNthBit(unsigned int num, int n) {
    // Create a mask with the nth bit cleared
    unsigned int mask = ~(1 << n);
    // Perform bitwise AND with the mask
    return num & mask;
}

int main() {
    unsigned int num;
    int n;

    scanf("%u", &num);
    scanf("%d", &n);

    // Clear the nth bit
    unsigned int result = clearNthBit(num, n);

    // Display the result
    printf("%u\n", n, result);

    return 0;
}
