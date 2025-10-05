#include <stdio.h>

void triple(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 3;
    }
}

int main() {
    int arr[100];
    for (int i = 0; i < 100; i++) {
        arr[i] = i;
    }

    triple(arr, 100);

    printf("Printing first 5 elements: ");
    for (int j = 0; j < 5; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    printf("Printing last 5 elements: ");
    for (int j = 95; j < 100; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}

