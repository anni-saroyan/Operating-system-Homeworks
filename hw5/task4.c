#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **arr;
    int i;

    arr = (char **)malloc(3 * sizeof(char *));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        arr[i] = (char *)malloc(50 * sizeof(char));
        if (arr[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }

    printf("Enter 3 strings:\n");
    for (i = 0; i < 3; i++) {
        scanf("%s", arr[i]);
    }

    arr = (char **)realloc(arr, 5 * sizeof(char *));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    for (i = 3; i < 5; i++) {
        arr[i] = (char *)malloc(50 * sizeof(char));
        if (arr[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }

    printf("Enter 2 more strings:\n");
    for (i = 3; i < 5; i++) {
        scanf("%s", arr[i]);
    }

    printf("All strings:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }

    for (i = 0; i < 5; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
