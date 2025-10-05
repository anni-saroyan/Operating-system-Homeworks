#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	void* init_adds=skrb(0);
	void* p=sbrk(4);




    int n, i;
    int *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int));
int value=malloc_usable_size(arr);
printf("%d",value);	



    if (arr == NULL) {
        printf("No memory\n");
        return 1;
    }

    printf("\nBefore values:\n");
    for (i = 0; i < n; i++) {
        printf("%d -> %d at %p\n", i, arr[i], (void*)&arr[i]);
    }

    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("\nAfter values:\n");
    for (i = 0; i < n; i++) {
        printf("%d -> %d at %p\n", i, arr[i], (void*)&arr[i]);
    }

    free(arr);
    return 0;
}
