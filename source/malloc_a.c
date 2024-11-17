//#include <stdio.h>
//#include "../header/malloc_a.h"

// Maloc
// Storage for 100 int-Type's
void malloc_a(void)
{
    void* malloc(size_t size);

    int *iptr;

    // Speicher für 100 int-Type's
    iptr = malloc(100 * sizeof(int));

    printf("sizeof int: %ld\n", sizeof(int));
    printf("Size of *iptr: %lu\n", sizeof(*iptr));
    printf("100 * sizeof int: %ld\n", 100 * sizeof(int));
    printf("%ld Bytes reserved!\n\n", 100 * sizeof(int));

}