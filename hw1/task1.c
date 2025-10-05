#include <stdio.h>

int main() {
    int x =78 ;
    int *ptr = &x;

    printf("Address of x using &x: %p\n", (void*)&x);
    printf("Address of x using pointer: %p\n", (void*)ptr);

    *ptr = 99;
    printf("Changed X: %d\n", x);

    return 0;
}
