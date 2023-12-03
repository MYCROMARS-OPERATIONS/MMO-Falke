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
    int ch;
    int u;
   
    // getchar() with int
    printf("INPUT int with getchar().\n");
    printf("Input a character: ");
    getchar();
    ch = getchar();
    printf("Your Input: %c\n\n", ch);

    // getchar() with char
    printf("INPUT char with getchar().\n");
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

        // getchar() loop
        printf("INPUT int with getchar() loop.\n"); 
        printf("Exit with: (win:) ctrl + z, (mac:) ctrl + d\n");
        printf("Input some characters: ");
        while(1)
        {
            u = getchar();
            if(u == EOF)
            break;
            putchar(u);
        }
    }
    else
    {
        printf("### ID not correct! ###\n\n");
    }
    
}

// Output
void hello(void) {
        printf("Output over function.c:\n");
        printf("With printf(): Hello World\n");
        printf("With putc(): ");
        putc('H', stdout);
        putc('e', stdout);
        putc('l', stdout);
        putc('l', stdout);
        putc('o', stdout);
        putc('\n', stdout);
        printf("\n");
        }

// POINTER
void pointA() {
    int alpha;
    alpha = 100;
    printf("Variable:\n");
    printf("value: %d\n", alpha);
    printf("Size of: %lu\n", sizeof(alpha));
    printf("address: %p\n\n", &alpha);

    // Pointer
    int *ptr;
    ptr = &alpha;
    printf("Pointer:\n");
    printf("value: %d\n", *ptr);
    printf("Size of: %lu\n", sizeof(*ptr));
    printf("address: %p\n\n", ptr);

    // Change Pointer
    *ptr = 150;
    printf("Variable (change in pointer *ptr):\n");
    printf("value: %d\n\n", alpha);

}