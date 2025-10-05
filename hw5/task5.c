#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *grades;
    int max, min;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    grades = (int *)malloc(n * sizeof(int));
    if (grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the grades: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    max = grades[0];
    min = grades[0];

    for (i = 1; i < n; i++) {
        if (grades[i] > max) max = grades[i];
        if (grades[i] < min) min = grades[i];
    }

    printf("Highest grade: %d\n", max);
    printf("Lowest grade: %d\n", min);

    free(grades);
    return 0;
}
