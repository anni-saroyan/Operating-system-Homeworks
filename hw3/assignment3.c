#include <stdio.h>
#include <stdlib.h>

void goodbye1() {
    printf("Cleanup function 1 called\n");
}

void goodbye2() {
    printf("Cleanup function 2 called\n");
}

int main() {
    atexit(goodbye1);
    atexit(goodbye2);

    printf("Main function is exiting\n");
    exit(0);
}
