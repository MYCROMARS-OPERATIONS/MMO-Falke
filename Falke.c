// Falke 2023 v.1.0.0
#include <stdio.h>
#include <stdlib.h>

int menu = 0;
int timer = 0;

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
    double i = 1;
    double step = 1000;  // Reading step
    int st = 1;       // Counter
    int multi = 1000000; // Multiplikator 1 Mil.

    // Print Timer size
    printf("Timer size (tx): %f\n", tx);
    printf("Timer Multiplikator: %d\n", multi);

    // Timer ^UP
    tx *= multi;

    printf("Timer new size (tx): %f\n", tx);

    // Menu
    printf("Press: (1) START | (2) EXIT\n");
    scanf("%d", &menu);

    if (menu == 1)
    {
        printf("*** TIMER START ***\n");
        // Timer
        while (i < tx)
        {
            i++;
            
            // Step every 1000
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
    else if (menu == 2)
    {
        printf("### Exit Timer ###\n\n");
    }
}

// Input
void inputChar(void)
{
    char buchstabe, id;
    // getchar()
    printf("INPUT with getchar().\n");
    printf("Input a character: ");
    buchstabe = getchar();
    buchstabe = getchar();

    printf("Your Input: %c\n\n", buchstabe);

    // scanf()
    printf("INPUT with scanf().\n");
    printf("Press 'a' for continue: ");
    scanf("%c", &id);
    scanf("%c", &id);

    printf("Your Input: %c\n", id);
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

int main()
{
    printf("\n");
    printf("###### MMO Falke 2023 ######\n");
    printf("*****************************\n");

// ********************** MENU ************************
mainMenu:
    printf("********* MAIN MENU *********\n");
    printf("(1) CALCULATION | (2) TIMER | (3) INPUT | (4) EXIT\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        // Calculation
        printf("*** CALCULATION ***\n");
        calculation();
        goto mainMenu;
        // break;
    case 2:
        // Timer
        printf("*** TIMER ***\n");
        printf("Input a number: ");
        scanf("%d", &timer);
        // Timer Funktion
        timerA(timer);
        goto mainMenu;
        // break;
    case 3:
        // Input Character
        printf("*** INPUT ***\n");
        inputChar();
        goto mainMenu;
        // break;
    case 4:
        printf("\n%%%%%%%%%%%%%% Programm END! %%%%%%%%%%%%%%\n");
        printf("*****************************");
        exit(EXIT_FAILURE);

    default: break;
    }

    return 0;
}