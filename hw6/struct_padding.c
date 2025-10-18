#include <stdio.h>

struct Example1 {
    char a;
    int b;
    double c;
};

struct Example2 {
    double c;
    int b;
    char a;
};

int main() {
    struct Example1 e1;
    struct Example2 e2;

    printf("Size of struct1 1: %zu bytes\n", sizeof(e1));
    printf("Addresses \n");
    printf("  &a: %p\n", (void*)&e1.a);
    printf("  &b: %p\n", (void*)&e1.b);
    printf("  &c: %p\n\n", (void*)&e1.c);
    printf("Size of struct2: %zu bytes\n", sizeof(e2));
    printf("Addresses \n");
    printf("  &c: %p\n", (void*)&e2.c);
    printf("  &b: %p\n", (void*)&e2.b);
    printf("  &a: %p\n", (void*)&e2.a);
    return 0;
}
