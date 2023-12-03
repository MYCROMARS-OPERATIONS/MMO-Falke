#include <stdio.h>
#include "header/pointer_b.h"

// Calculation
void pointerB(void)
{
    int a[5] = {2, 4, 6, 8, 10};
    int *pt;
    
    pt = a;

    printf("Array[5] value: 2, 4, 6, 8, 10\n\n");

    printf("Pointer value +0: %d\n", *(pt+0));
    printf("Pointer value +1: %d\n", *(pt+1));
    printf("Pointer value +2: %d\n", *(pt+2));
    printf("Pointer value +3: %d\n", *(pt+3));
    printf("Pointer value +4: %d\n\n", *(pt+4));
}