#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* my_realloc(void* ptr, size_t old_size, size_t new_size) {
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    void* new_ptr = malloc(new_size);
    if (new_ptr == NULL) {
        return NULL;
    }

    if (ptr != NULL) {
        size_t copy_size = old_size < new_size ? old_size : new_size;
        memcpy(new_ptr, ptr, copy_size);
        free(ptr);
    }

    return new_ptr;
}

int main() {
    int *arr;
    int i;

    arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    arr = (int *)my_realloc(arr, 5 * sizeof(int), 8 * sizeof(int));
    if (arr == NULL) {
        printf("my_realloc failed!\n");
        return 1;
    }

    printf("Enter 3 more integers: ");
    for (i = 5; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    printf("All integers: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
