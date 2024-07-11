#include <stdio.h>  
#include "../header/mainMenu.h" 

// INPUT MENU
void mainMenu_9(int *m)
{
    printf("*** MALLOC MENU ***\n");
    printf("Press: (1) MALLOC-A | (2) MALLOC-B | (0) EXIT\n");

    printf("Your Input: ");
    scanf("%d", m);
    printf("\n");

    if (*m == 1)
    {
        // Malloc A
        malloc_a();
    }
    else if (*m == 2)
    {
        // Malloc B
        malloc_b();
    }
    else if (*m == 0)
    {
        *m = 0;
        printf("### EXIT MALLOC ###\n\n");
    }
    else
    {
        *m = 0;
        printf("### END MALLOC ###\n\n");
    }
}