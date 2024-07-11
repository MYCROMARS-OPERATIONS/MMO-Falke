#include <stdio.h>  
#include "../header/mainMenu.h" 

// INPUT MENU
void mainMenu_3(int *m)
{
    printf("*** INPUT MENU ***\n");
    printf("Press: (1) INPUT-A | (2) INPUT-B\n");
    printf("Press: (0) EXIT\n");
    printf("Input: ");
    scanf("%d", m);
    printf("\n");

     if (*m == 1)
        {
            // Input A
            // Input Character
            inputChar();
        }
        else if (*m == 2)
        {
            // Input B
            input_b();
        }
        else
        {
            *m = 0;
            printf("### END Input ###\n\n");
        }
}