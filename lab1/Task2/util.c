#include "util.h"

int sum_array(const int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int max_array(const int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) max = arr[i];
    }
    return max;
}

int count_occurrences(const int *arr, int n, int value) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

