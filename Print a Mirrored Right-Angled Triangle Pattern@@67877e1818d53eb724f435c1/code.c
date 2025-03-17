#include <stdio.h>

void printMirroredTriangle(int N) {
    for (int i = 1; i <= N; i++) { // Loop for each row
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next row
    }
}

int main() {
    int N;
    scanf("%d", &N);

    // Print the mirrored triangle pattern
    printMirroredTriangle(N);

    return 0;
}
