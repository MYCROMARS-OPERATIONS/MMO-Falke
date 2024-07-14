#include <stdio.h>
#include "../header/loop_a.h"

// LOOP A
// While Loop
void loopA(void)
{
    printf("While loop 1...10:\n\n");

    int h = 1;

    while(h <= SIZE)
    {
        printf("%d\n", h);
        h++;
    }
    printf("\n");
}