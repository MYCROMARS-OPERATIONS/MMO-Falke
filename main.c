/* ****************************************************** */
/*                  MYCROMARS OPERATIONS                  */
/*                        FALKE 2023                      */
/*                      ALEXANDER RUDI                    */
/* ****************************************************** */
#include <stdio.h>
#include <stdlib.h>

// My header file
#include "header.h"


int main()
{
    printf("\n");
    printf("######## MMO FALKE 2023 ########\n");
    printf("********************************\n");

    /* ****************************************************** */
    /* ********************** MAIN MENU ********************* */
    /* ###################################################### */

    int menu = 0;
    int timer = 0;

    // Go here <<<----------------------------
    mainMenu:

    printf("********* MAIN MENU *********\n");
    printf("(1) CALCULATION | (2) DELAY | (3) INPUT | (4) OUTPUT | (5) POINTER\n");
    //printf("(6) ARRAY | (7) STRUCTURE | (8) FILE\n");
    printf("(0) EXIT\n");
    printf("Your Input: ");
    scanf("%d", &menu);
    printf("\n");

    switch (menu)
    {
        case 1:
            // Calculation
            printf("*** CALCULATION ***\n");
            printf("a + b\n");
            calculation();
            //goto mainMenu;
            break;

        case 2:
            // Delay
            printf("*** DELAY ***\n");
            printf("Input a number: ");
            scanf("%d", &timer);
            // Function
            delayA(timer);
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
            outputString();
            //goto mainMenu;
            break; 

        case 5:
            // Pointer
            pointA();   
            break;

        case 0:
            printf("%%%%%%%%%%%%%% Program END! %%%%%%%%%%%%%%\n");
            printf("*****************************");
            //exit(1);
            //exit(EXIT_FAILURE);
            exit(EXIT_SUCCESS);
            //return EXIT_FAILURE;
            //return EXIT_SUCCESS;

        default: break;
    }

goto mainMenu;
return 0;
}


