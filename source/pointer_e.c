//#include <stdio.h>
//#include "../header/pointer_e.h"

// POINTER E, to Function
void pointerE(int *val)
{
    printf("POINTER-E\n");
    printf("Address of Pointer to Function\n");
    printf("Pointer value *val: %d\n", *val);

    // Change Pointer value
    *val = 0;

    printf("Pointer value reset: %d\n", *val);
}