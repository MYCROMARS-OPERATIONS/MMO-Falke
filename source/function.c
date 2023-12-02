#include <stdio.h>
#include "header/function.h"

// Calculation
void calculation(void)
{
    int a = 0;
    int b = 0;
    int sum = 0;

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Summe: ");
    printf("%d\n\n", sum);
}

// Timer
void timerA(double tx)
{
    int menuB = 0;
    double i = 1;
    double step = 100;  // Reading step
    int st = 1;       // Counter
    int multi = 10000; // Multiplikator 1 Mil.

    // Print Timer size
    printf("Timer size: %f\n", tx);
    printf("Timer Multiplikator: %d\n", multi);

    // Timer ^UP
    tx *= multi;

    printf("Timer new size: %f\n", tx);

    // Menu
    printf("Press: (1) START | (2) EXIT\n");
    printf("Your Input: ");
    scanf("%d", &menuB);

    if (menuB == 1)
    {
        printf("*** TIMER START ***\n");
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
            if (i = st * step)
            {
                printf("Timer: %f\n", i);
            }
            
        }
        printf("\n");
    }
    else if (menuB == 2)
    {
        printf("### Exit Timer ###\n\n");
    }
    else
    {
        printf("### Exit ###\n\n");
    }
}

// Input
void inputChar(void)
{
    char b, id;
    // getchar()
    
    printf("INPUT with getchar().\n");
    printf("Input a character: ");
    getchar();
    b = getchar();
    printf("Your Input: %c\n\n", b);
    
    // scanf()
    printf("INPUT with scanf().\n");
    printf("Press 'a' for continue: ");
    getchar();
    scanf("%c", &id);

    printf("Your Input: %c\n\n", id);
    printf(id == 'a' ? "You have access!\n" : "You don't have access!\n");

    // Exit or continue
    if (id == 'a')
    {
        printf("*** ID correct! ***\n\n");
    }
    else
    {
        printf("### ID not correct! ###\n\n");
    }
    
}


// Output
void hello(void) {
        printf("Output over function.c:\n");
        printf("Hello World\n\n");
        }