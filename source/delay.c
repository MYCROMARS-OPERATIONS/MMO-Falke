#include <stdio.h>
#include "header/delay.h"

// Delay
void delayA(double tx)
{
    int menuB = 0;
    double i = 1;
    double step = 100;  // Reading step
    int st = 1;       // Counter
    int multi = 10000; // Multiplicator 1 Mil.

    // Print Timer size
    printf("Delay size: %f\n", tx);
    printf("Delay Multiplicator: %d\n", multi);

    // Timer ^UP
    tx *= multi;

    printf("Delay new size: %f\n", tx);

    // *------------- Menu B-------------*
    printf("Press: (1) START | (0) EXIT\n");
    printf("Your Input: ");
    scanf("%d", &menuB);

    if (menuB == 1)
    {
        printf("*** DELAY START ***\n");
        // Timer
        while (i < tx)
        {
            i++;
            
            // Step every 100
            if (i > st * step)
            {
                st++;
            }
            // Print every Step
            if (i == st * step)
            {
                printf("Delay: %f\n", i);
            }
            
        }
        printf("\n");
    }
    else if (menuB == 0)
    {
        printf("### Exit Delay ###\n\n");
    }
    else
    {
        printf("### End Delay ###\n\n");
    }
}
