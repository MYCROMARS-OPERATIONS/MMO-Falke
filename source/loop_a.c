#include <stdio.h>
#include "../header/loop_a.h"

// LOOP A
// While Loop
void loopA(void)
{
    int h = 1;

    printf("While loop 1...10:\n\n");

    while(h <= SIZE)
    {
        printf("%d\n", h);
        h++;
    }
    printf("\n");
}