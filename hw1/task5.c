#include <stdio.h>

int main() {
    char str[] = "Homework1o";
    char *ptr = str;
    int count = 0;

    printf("Printing g using pointer:\n");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
        count++;
    }
    printf("Length of string is: %d\n", count);

    return 0;
}
