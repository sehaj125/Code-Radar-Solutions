#include <stdio.h>
#include <limits.h> 

void findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("%d\n",largest);
    } else {
        printf("%d\n", secondLargest);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, n);

    return 0;
}