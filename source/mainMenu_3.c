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

    switch (*m)
    {
    case 1: 
        // Input A
        // Input Character
        inputChar();
        break;

    case 2:
        // Input B
        input_b();
    
    default:
        *m = 0;
        printf("### END Input ###\n\n");
        break;
    }
}