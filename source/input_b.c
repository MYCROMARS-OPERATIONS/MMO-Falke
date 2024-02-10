#include <stdio.h>
#include "../header/input_b.h"

// Input
void input_b(void)
{
    int a;

    printf("Input a Number: ");

    if (scanf("%d", &a) != 1) {
        printf("Input is not correct (NULL)!\n");
    }
    else {
        printf("Input is correct\n");
        printf("Input = %d\n\n", a);
        
    }

    //return (0);
    
}