#include <stdio.h>
#include "../header/pointer_d.h"

// POINTER D, to Function
void pointerD(int *val)
{
    printf("POINTER-D\n");
    printf("Address to Function\n");
    printf("Value: %d\n", *val);

    // reset 
    *val = 0;
    printf("Value reset: %d\n\n", *val);
}