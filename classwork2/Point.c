#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point s1;

    printf("Size of s1:            %zu bytes\n", sizeof(s1));
    printf("Size of struct Point:  %zu bytes\n", sizeof(struct Point));
    printf("Size of s1.x:          %zu bytes\n", sizeof(s1.x));
    printf("Size of s1.y:          %zu bytes\n", sizeof(s1.y));

    return 0;
}
