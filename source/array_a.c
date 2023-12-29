#include <stdio.h>
#include "header/array_a.h"

// Calculation
void arrayA(void)
{
    printf("Array [3]: 100, 200, 300\n\n");

    int array_a[SIZE] = {100, 200, 300};
    array_a[0] *= 10;
    array_a[1] *= 15;
    array_a[2] *= 20;

    //wrong:
    array_a[3] *= 30;

    printf("Array 0*10: %d\n", array_a[0]);
    printf("Array 1*15: %d\n", array_a[1]);
    printf("Array 2*20: %d\n\n", array_a[2]);

    // wrong:
    printf("Array 3*30: %d\n\n", array_a[3]);
}