#include <stdio.h>  
#include "../header/mainMenu.h" 

// LOOP MENU
void mainMenu_7(int *m)
{
    printf("*** LOOP MENU ***\n");
    printf("Press: (1) LOOP-A | (2) LOOP-B | (3) LOOP-C | (4) LOOP-D | (5) LOOP-E\n");
    printf("Press: (6) LOOP-F | (0) EXIT\n");
    printf("Your Input: ");
    scanf("%d", m);
    printf("\n");

    if (*m == 1)
    {
        // Loop A
        loopA();
    }
    else if (*m == 2)
    {
        // Loop B
        loopB();
    }
    else if (*m == 3)
    {
        // Loop C
        loopC();
    }
    else if (*m == 4)
    {
        // Loop D
        loopD();
    }
    else if (*m == 5)
    {
        // Loop E
        loopE();
    }
    else if (*m == 6)
    {
        // Loop F
        loopF();
    }
    else if (*m == 0)
    {
        *m = 0;
        printf("### EXIT Loop ###\n\n");
    }
    else
    {
        *m = 0;
        printf("### END Loop ###\n\n");
    }
}