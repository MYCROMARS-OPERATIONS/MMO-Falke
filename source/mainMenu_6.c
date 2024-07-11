#include <stdio.h>  
#include "../header/mainMenu.h" 

// ARRAY MENU
void mainMenu_6(int *m)
{
    printf("*** ARRAY MENU ***\n");
    printf("Press: (1) ARRAY-A | (2) ARRAY-B | (3) ARRAY-C | (4) ARRAY-D | (5) ARRAY-E\n");
    printf("Press: (6) ARRAY-F | (0) EXIT\n");
    printf("Your Input: ");
    scanf("%d", m);
    printf("\n");

    if (*m == 1)
    {
        // Array A
        arrayA();
    }
    else if (*m == 2)
    {
        // Array B
        arrayB();
    }
    else if (*m == 3)
    {
        // Array C
        arrayC();
    }
    else if (*m == 4)
    {
        // Array C
        arrayD();
    }
    else if (*m == 5)
    {
        // Array E
        arrayE();
    }
    else if (*m == 6)
    {
        // Array F
        arrayF();
    }
    else if (*m == 0)
    {
        *m = 0;
        printf("### EXIT Array ###\n\n");
    }
    else
    {
        *m = 0;
        printf("### END Array ###\n\n");
    }
}