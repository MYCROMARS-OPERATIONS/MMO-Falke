#include <stdio.h>  
#include "../header/mainMenu.h" 

// MALLOC MENU
void mainMenu_9(int *m)
{
    printf("*** MALLOC MENU ***\n");
    printf("Press: (1) MALLOC-A | (2) MALLOC-B | (0) EXIT\n");

    printf("Your Input: ");
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT MALLOC ###\n\n");
        break;

    case 1:
        // Malloc A
        malloc_a();
        break;

    case 2:
        // Malloc B
        malloc_b();
        break;
    
    default:
        *m = 0;
        printf("### END MALLOC ###\n\n");
        break;
    }
}