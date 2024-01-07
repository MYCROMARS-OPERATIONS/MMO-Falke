#include <stdio.h>
#include "../header/pointer_e.h"

// POINTER D, to Function
void pointerE(int *val)
{
    printf("POINTER-E\n");
    printf("Pointer to Function\n");
    printf("Value: %d\n", *val);

    // reset 
    *val = 0;
    printf("Value reset: %d\n\n", *val);
}