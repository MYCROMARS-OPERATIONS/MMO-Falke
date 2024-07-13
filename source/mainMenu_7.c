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

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT Loop ###\n\n");
        break;

    case 1:
        // Loop A
        loopA();
        break;

    case 2:
        // Loop B
        loopB();
        break;

    case 3:
        // Loop C
        loopC();
        break;

    case 4:
        // Loop D
        loopD();
        break;

    case 5:
        // Loop E
        loopE();
        break;

    case 6:
        // Loop F
        loopF();
        break;

    default:
        *m = 0;
        printf("### END Loop ###\n\n");
        break;
    }
}