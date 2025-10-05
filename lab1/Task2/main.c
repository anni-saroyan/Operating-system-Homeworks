#include <stdio.h>
#include "util.h"

int main() {
    int arr[] = {1, 5, 2, 78, 1, 2, 32, 2};
    int size = 8;

    printf("Sum : %d\n", sum_array(arr, size));
    printf("Max : %d\n", max_array(arr, size));
    printf("Occurrences of 2 : %d\n", count_occurrences(arr, size, 2));

    return 0;
}

