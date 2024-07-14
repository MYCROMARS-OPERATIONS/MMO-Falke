#include <stdio.h>
#include <string.h>
#include "../header/input_b.h"

// Input a number
void input_b(void)
{
    int a;
    
    // Go here <<<---
    start:
    printf("Input a Number: ");

    if (scanf("%d", &a)) {
        printf("\nYour Input: %d\n", a);
        printf("Input is correct.\n\n");
    }
    else{
        printf("\nYour Input: %d\n", a);
        printf("Input is not a number!\n\n");
        getchar();
        // Go here <<<---
        goto start;
    }

    //return (0);
}