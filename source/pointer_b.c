#include <stdio.h>
#include "../header/pointer_b.h"

// POINTER B, of Array
void pointerB(void)
{
    printf("POINTER-B\n");
    // Array
    int a[5] = {2, 4, 6, 8, 10};

    // Pointer
    int *pt;
    
    // Address of Array to Pointer
    pt = a;

    printf("a Array[5] value: 2, 4, 6, 8, 10\n");
    printf("Pointer pt = a\n\n");

    printf("Pointer value *(pt+0): %d\n", *(pt+0));
    printf("Pointer value *(pt+1): %d\n", *(pt+1));
    printf("Pointer value *(pt+2): %d\n", *(pt+2));
    printf("Pointer value *(pt+3): %d\n", *(pt+3));
    printf("Pointer value *(pt+4): %d\n\n", *(pt+4));
}