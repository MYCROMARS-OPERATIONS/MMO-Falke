/* ****************************************************** */
/*                  MYCROMARS OPERATIONS                  */
/*                      FALKE v. 0.0.9                    */
/*                      ALEXANDER RUDI                    */
/*                        17.11.2024                      */
/* ****************************************************** */

// header file
#include "header.h"

// Input String löschen
char b[50];
void scanString0(void){
    scanf("%s", &b);
}

int main()
{
    printf("\n");
    printf("**********************************************\n");
    printf("########            FALKE             ########\n");
    printf("########     MYCROMARS OPERATIONS     ########\n");
    printf("######## (C) All rights reserved 2024 ########\n");
    printf("######## www.mycromars-operations.com ########\n");
    printf("########           V. 1.0.0           ########\n");
    printf("**********************************************\n\n");

    int menu = 0;
    int menuA = 0;
    int menuB = 0;
    
    /* ********************** MAIN MENU ********************* */
    // Go here <<<---
    mainMenu:

    printf("********** MAIN MENU ***********\n");
    printf("Press: (0) EXIT  | (1) CALCULATION | (2) DELAY     | (3) INPUT  | (4) OUTPUT | (5) POINTER\n");
    printf("Press: (6) ARRAY | (7) LOOP        | (8) STRUCTURE | (9) MALLOC | (10) DATA  | (11) TIME \n");
    printf("Press: (12) MATH\n");    
    
    printf("Input: ");

    if (scanf("%d", &menu)) {
       
        // Falsche Zahl (nicht 1-12)
        if (menu < 0 || menu > 12){
                printf("\nInput is not 1-12\n\n");
                // Go here <<<---
                goto mainMenu;
            }

        switch (menu)
        {
        case 0:
            // *------------- Exit -------------*
            // Funktion
            mainMenu_0(&menuB);

        case 1:
            // *------------- Calculation -------------*
            // Funktion
            mainMenu_1(&menuB);
            break;

        case 2:
            // *------------- Delay -------------*
            // Funktion
            mainMenu_2(&menuB);
            break;

        case 3:
            // *------------- Input -------------*
            // Funktion
            mainMenu_3(&menuB);
            break;

        case 4:
        // *------------- Output -------------*
            // Funktion
            mainMenu_4(&menuB);
            break;

        case 5:
            // *------------- Pointer -------------*
            // Funktion
            mainMenu_5(&menuB);
            break;

        case 6:
            // *------------- Array -------------*
            // Funktion
            mainMenu_6(&menuB);
            break;

        case 7:
            // *------------- Loop -------------*
            // Funktion
            mainMenu_7(&menuB);
            break;

        case 8:
            // *------------- Structure -------------*
            // Funktion
            mainMenu_8(&menuB);
            break;

        case 9:
            // *------------- Malloc -------------*
            // Funktion
            mainMenu_9(&menuB);
            break;

        case 10:
            // *------------- Data -------------*
            // Funktion
            mainMenu_10(&menuB);
            break;
        
        case 11:
            // *------------- Time -------------*
            // Funktion
            mainMenu_11(&menuB);
            break;
        
        case 12:
            // *------------- Math -------------*
            // Funktion
            mainMenu_12(&menuB);
            break;
        

        default:
            printf("Input is not a number 1-11\n\n");
            break;
        }
    }
    else{
        printf("\nInput is not a number 1-11\n\n");
        scanString0();
        
        // Go here <<<---
        goto mainMenu;
    }
 
    // reset variable
    menu = 0;
    menuA = 0;
    menuB = 0;

    // goto mainMenu;
    goto mainMenu;
}
