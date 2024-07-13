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

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT Array ###\n\n");
        break;

    case 1:
        // Array A
        arrayA();
        break;

    case 2:
        // Array B
        arrayB();
        break;

    case 3:
        // Array C
        arrayC();
        break;

    case 4:
        // Array C
        arrayD();
        break;

    case 5:
        // Array E
        arrayE();
        break;

    case 6:
        // Array F
        arrayF();
        break;
    
    default:
        *m = 0;
        printf("### END Array ###\n\n");
        break;
    }
}