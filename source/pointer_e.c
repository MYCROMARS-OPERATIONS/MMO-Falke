#include <stdio.h>
#include "../header/pointer_e.h"

// POINTER D, to Function
void pointerE(int *val)
{
    printf("POINTER-E\n");
    printf("Pointer to Function\n");
    printf("Pointer value: %d\n", *val);

    // reset 
    *val = 0;
    printf("Pointer value reset: %d\n", *val);
}