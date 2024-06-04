#include <stdio.h>
#include "../header/malloc_a.h"

// Input
void malloc_a(void)
{
    void* malloc(size_t size);

    int *iptr;

    // Speicher für 100 int-Type's
    iptr = malloc(100 * sizeof(int));

    //printf("sizeof int: %d\n", sizeof(int));
    printf("Size of *iptr: %lu\n", sizeof(*iptr));
    //printf("100 * sizeof int: %d\n", 100 * sizeof(int));
    //printf("%d Bytes reserved!\n\n", 100 * sizeof(int));

}