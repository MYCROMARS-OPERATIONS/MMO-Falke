//#include <stdio.h>  
//#include "../header/mainMenu.h" 

// MALLOC MENU
void mainMenu_9(int *m)
{
    printf("\n*** MALLOC MENU ***\n");
    printf("Press: (1) MALLOC-A | (2) MALLOC-B | (0) EXIT\n");

    printf("Your Input: ");

    // Input
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT MALLOC ###\n\n");
        break;

    case 1:
        // Funktion
        // Malloc A
        // Storage for 100 int-Type's
        malloc_a();
        break;

    case 2:
        // Funktion
        // Malloc B
        // Storage reservation
        malloc_b();
        break;
    
    default:
        *m = 0;
        printf("### END MALLOC ###\n\n");
        break;
    }
}