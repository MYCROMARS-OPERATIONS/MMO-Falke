#include <stdio.h>
#include "header/array_b.h"

// ARRAY B
void arrayB(void)
{
    printf("Array [3][3]: {{10, 20, 30},{100, 200, 300},{1000, 2000 3000}}\n\n");
    int array_a[SIZE][SIZE] = {{10, 20, 30},{10, 20, 30},{10, 20, 30}};
    array_a[0][0] *= 2;
    array_a[0][1] *= 2;
    array_a[0][2] *= 2;

    printf("Array [0][0]*2: %d\n", array_a[0][0]);
    printf("Array [0][1]*2: %d\n", array_a[0][1]);
    printf("Array [0][2]*2: %d\n\n", array_a[0][2]);
}