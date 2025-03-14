/****************/
/*   MYCROMARS  */
/*ALEXANDER RUDI*/
/****************/

// header file
//#include <windows.h>
#include "header.h"

// Input String löschen
char b[50];
void scanString0(void){
    scanf("%s", &b);
}

int main()
{
    printf("\n");
    printf("************************************\n");
    printf("####  MYCROMARS WEBSITE CREATOR ####\n");
    printf("#### C All rights reserved 2025 ####\n");
    printf("####        ALEXANDER RUDI      ####\n");
    printf("####         Version: 1.0       ####\n");
    printf("************************************\n\n");

    int menu = 0;
    int menu2 = 0;
     
    /* ********************** MENU ********************* */
    // Go here <<<---
    menu:

    printf("********** MAIN MENU ***********\n");
    printf("Press: (0) EXIT  | (1) CALCULATION | (2) DELAY     | (3) INPUT\n");   
    
    printf("Input: ");

    if (scanf("%d", &menu)) {
       
        // Falsche Zahl (nicht 1-12)
        if (menu < 0 || menu > 12){
                printf("\nInput is not 1-12\n\n");
                // Go here <<<---
                goto menu;
            }

        switch (menu)
        {
        case 0:
            // *------------- Exit -------------*
            Menu2_0(&menu2);

        case 1:
            // *------------- Calculation -------------*
            // 
            Menu2_1(&menu2);
            break;

        case 2:
            // *------------- Delay -------------*
            // 
            Menu2_2(&menu2);
            break;

        case 3:
            // *------------- Input -------------*
            // 
            Menu2_3(&menu2);
            break;
        

        default:
            printf("Input is not a number 1-3\n\n");
            break;
        }
    }
    else{
        printf("\nInput is not a number 1-3\n\n");
        scanString0();
        
        // Go here <<<---
        goto menu;
    }
 
    // reset variable
    menu = 0;
    menu2 = 0;

    // goto mainMenu;
    goto menu;
}
