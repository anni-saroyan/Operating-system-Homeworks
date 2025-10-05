#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;
    int **dptr = &ptr;

    printf("Value of x  pointer: %d\n", *ptr);
    printf("Value of x  double pointer: %d\n", **dptr);

    return 0;
}
