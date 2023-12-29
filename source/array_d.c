#include <stdio.h>
#include "header/array_d.h"

// Calculation
void arrayD(void)
{
    int numbers[] = {45, 50, 88, 100, 213};
    int temp, x;

    puts("Before:");

    for(x=0; x<5; x++)
        printf("%d\n", numbers[x]);

    printf("\n");

    // switch 2 & 3
    temp = numbers[3];
    numbers[3] = numbers[2];
    numbers[2] = temp;

    puts("After:");

    for(x=0; x<5; x++)
        printf("%d\n", numbers[x]);

    printf("\n");
}