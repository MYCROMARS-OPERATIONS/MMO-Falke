#include <stdio.h>
#include "../header/malloc_a.h"

// Input
void malloc_a(void)
{
    void* malloc(size_t size);

    int *iptr;

    // Speicher für 100 int-Type's
    iptr = malloc(100 * sizeof(int));

    printf("sizeof int: %d\n", sizeof(int));
    printf("100 * sizeof int: %d\n", 100 * sizeof(int));
    printf("400 Bytes reserved!\n\n");

    printf("Menmory allocation  iptr: %d\n", iptr);
    printf("Menmory allocation *iptr: %d\n", *iptr);
    printf("Menmory allocation &iptr: %d\n\n", &iptr);
}