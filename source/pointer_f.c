#include <stdio.h>
#include "../header/pointer_f.h"

// POINTER F, to Function
void pointerF(int *val)
{
    printf("POINTER-F\n");
    printf("Address of Pointer to Function\n");
    printf("Pointer value *val: %d\n", *val);

    // Change Pointer value
    *val = 0;

    printf("Pointer value reset: %d\n", *val);
}