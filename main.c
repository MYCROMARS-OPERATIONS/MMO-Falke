/* ****************************************************** */
/*                  MYCROMARS OPERATIONS                  */
/*                        FALKE 2023                      */
/*                      ALEXANDER RUDI                    */
/*             https://mycromars-operations.com           */
/* ****************************************************** */
#include <stdio.h>
#include <stdlib.h>

#include "header.h"


int main()
{
    int menu = 0;
    int timer = 0;

    printf("\n");
    printf("######## FALKE 2023 ########\n");
    printf("****************************\n");

    /* ****************************************************** */
    /* ********************** MAIN MENU ********************* */
    /* ###################################################### */

    // Go here
    mainMenu:

    printf("********* MAIN MENU *********\n");
    printf("(1) CALCULATION | (2) TIMER | (3) INPUT | (4) OUTPUT | (5) EXIT\n");
    printf("Your Input: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        // Calculation
        printf("*** CALCULATION ***\n");
        calculation();
        //goto mainMenu;
        break;

    case 2:
        // Timer
        printf("*** TIMER ***\n");
        printf("Input a number: ");
        scanf("%d", &timer);
        // Timer Funktion
        timerA(timer);
        //goto mainMenu;
        break;

    case 3:
        // Input Character
        printf("*** INPUT ***\n");
        inputChar();
        //goto mainMenu;
        break;

    case 4:
        // Output Hello World
        printf("*** OUTPUT ***\n");
        hello();
        //goto mainMenu;
        break;    

    case 5:
        printf("\n%%%%%%%%%%%%%% Program END! %%%%%%%%%%%%%%\n");
        printf("*****************************");
        //exit(EXIT_FAILURE);
        //exit(EXIT_SUCCESS);
        //exit(1);
        //return EXIT_FAILURE;
        return EXIT_SUCCESS;

    default: break;
    }

goto mainMenu;
return 0;
}


