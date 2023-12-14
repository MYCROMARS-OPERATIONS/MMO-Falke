/* ****************************************************** */
/*                  MYCROMARS OPERATIONS                  */
/*                    FALKE 2023 v0.0.3                   */
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
    int menuB = 0;
    int timer = 0;

    // Go here <<<---
    mainMenu:
    
    printf("********** MAIN MENU ***********\n");
    printf("Press: (1) CALCULATION | (2) DELAY | (3) INPUT | (4) OUTPUT | (5) POINTER\n");
    printf("Press: (6) ARRAY       | (7) LOOP  | (0) EXIT\n");
    //printf("(7) STRUCTURE | (8) FILE\n");
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
            timer = 0;
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
        // *------------- Pointer Menu -------------*
            printf("*** POINTER MENU ***\n");
            printf("Press: (1) POINTER-A | (2) POINTER-B | (0) EXIT\n");
            printf("Your Input: ");
            scanf("%d", &menuB);
            printf("\n");

            if (menuB == 1)
            {
                // Pointer A
                pointerA();   
                break;
            }
            else if (menuB == 2)
            {
                // Pointer B
                pointerB();   
                break;
            }
            else if (menuB == 0)
            {
                menuB = 0;
                printf("### Exit Pointer ###\n\n");
            }
            else
            {
                menuB = 0;
                printf("### End Pointer ###\n\n");
            }
            break;

        case 6:
        // *------------- Array Menu -------------*
            printf("*** ARRAY MENU ***\n");
            printf("Press: (1) ARRAY-A | (2) ARRAY-B | (3) ARRAY-C | (4) ARRAY-D | (5) ARRAY-E\n");
            printf("Press: (6) ARRAY-F | (0) EXIT\n");
            printf("Your Input: ");
            scanf("%d", &menuB);
            printf("\n");

            if (menuB == 1)
            {
                // Array A
                arrayA();   
                break;
            }
            else if (menuB == 2)
            {
                // Array B
                arrayB();
                break;
            }
            else if (menuB == 3)
            {
                // Array C
                arrayC();
                break;
            }
            else if (menuB == 4)
            {
                // Array C
                arrayD();
                break;
            }
            else if (menuB == 5)
            {
                // Array E
                arrayE();
                break;
            }
            else if (menuB == 6)
            {
                // Array F
                arrayF();
                break;
            }
            else if (menuB == 0)
            {
                menuB = 0;
                printf("### Exit Array ###\n\n");
            }
            else
            {
                menuB = 0;
                printf("### End Array ###\n\n");
            }
            break;

        case 7:
            // *------------- Loop Menu -------------*
            printf("*** LOOP MENU ***\n");
            printf("Press: (1) LOOP-A | (2) LOOP-B | (3) LOOP-C | (4) LOOP-D | (5) LOOP-E\n");
            printf("Press: (6) LOOP-F | (0) EXIT\n");
            printf("Your Input: ");
            scanf("%d", &menuB);
            printf("\n");

            if (menuB == 1)
            {
                // Loop A
                loopA();   
                break;
            }
            else if (menuB == 2)
            {
                // Loop B
                loopB();   
                break;
            }
            else if (menuB == 3)
            {
                // Loop C
                loopC();   
                break;
            }
            else if (menuB == 4)
            {
                // Loop D
                loopD();   
                break;
            }
            else if (menuB == 5)
            {
                // Loop E
                loopE();   
                break;
            }
            else if (menuB == 6)
            {
                // Loop F
                loopF();   
                break;
            }
            else if (menuB == 0)
            {
                menuB = 0;
                printf("### Exit Loop ###\n\n");
            }
            else
            {
                menuB = 0;
                printf("### End Loop ###\n\n");
            }
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

// reset variable
menu = 0;

goto mainMenu;
}


