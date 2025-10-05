#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void* aligned_malloc(size_t size, size_t alignment) {
    void* original;
    void** aligned;
    size_t total = size + alignment - 1 + sizeof(void*);
    original = malloc(total);
    if (original == NULL) return NULL;

    uintptr_t addr = (uintptr_t)original + sizeof(void*);
    uintptr_t aligned_addr = (addr + alignment - 1) & ~(alignment - 1);
    aligned = (void**)aligned_addr;
    aligned[-1] = original;

    return aligned;
}

void aligned_free(void* ptr) {
    if (ptr == NULL) return;
    void* original = ((void**)ptr)[-1];
    free(original);
}

int main() {
    size_t size = 100;
    size_t alignment = 32;
    void* ptr = aligned_malloc(size, alignment);

    if (ptr == NULL) {
        printf("aligned_malloc failed!\n");
        return 1;
    }

    if ((uintptr_t)ptr % alignment == 0) {
        printf("Memory is %zu-byte aligned.\n", alignment);
    } else {
        printf("Memory is NOT aligned.\n");
    }

    aligned_free(ptr);
    return 0;
}
