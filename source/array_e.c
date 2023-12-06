#include <stdio.h>
#include "header/array_e.h"

// Calculation
void arrayE(void)
{
    int original[5] = {45, 50, 88, 100, 213};
    int dublicate[5];
    int x;

    for(x=0; x<5; x++)
        dublicate[x] = original[x];

    puts("Array values:");

    for(x=0; x<5; x++)
        printf("Element#%d %3d == %3d\n", x, original[x], dublicate[x]);

    printf("\n");
}