#include <stdio.h>
#include "header/pointer_a.h"

// POINTER
void pointerA() {
    int alpha;
    alpha = 100;
    printf("Variable:\n");
    printf("value: %d\n", alpha);
    printf("Size of: %lu\n", sizeof(alpha));
    printf("address: %p\n\n", &alpha);

    // Pointer
    int *ptr;
    ptr = &alpha;
    printf("Pointer:\n");
    printf("value: %d\n", *ptr);
    printf("Size of: %lu\n", sizeof(*ptr));
    printf("address: %p\n\n", ptr);

    // Change Pointer
    *ptr = 150;
    printf("Variable (change in pointer *ptr):\n");
    printf("value: %d\n\n", alpha);

}