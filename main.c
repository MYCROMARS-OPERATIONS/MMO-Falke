/* ****************************************************** */
/*                  MYCROMARS OPERATIONS                  */
/*                       FALKE v0.0.7                     */
/*                      ALEXANDER RUDI                    */
/*                        07.07.2024                      */
/* ****************************************************** */
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

// My header file
#include "header.h"

int main()
{
    printf("\n");
    printf("######## MMO FALKE 2024 ########\n");
    printf("********************************\n");

    int menu = 0;
    int menuB = 0;
    

// Go here <<<---
mainMenu:
    /* ********************** MAIN MENU ********************* */
    printf("********** MAIN MENU ***********\n");
    printf("Press: (1) CALCULATION | (2) DELAY | (3) INPUT     | (4) OUTPUT  | (5) POINTER\n");
    printf("Press: (6) ARRAY       | (7) LOOP  | (8) STRUCTURE | (9) MALLOC | (10) DATA | (0) EXIT\n");
    
    printf("Input: ");
    scanf("%d", &menu);
    printf("\n");
 
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
        // *------------- Strukturen -------------*
        // Funktion
        mainMenu_8(&menuB);
        break;

    case 9:
        // *------------- Maloc -------------*
        // Funktion
        mainMenu_9(&menuB);
        break;

    case 10:
        // *------------- Datei -------------*
        printf("*** DATA MENU ***\n");
        printf("Press: (1) DATA-A | (2) DATA-B | (3) DATA-C | (4) DATA-D | (5) DATA-E\n");
        printf("Press: (6) DATA-F | (7) DATA-G | (0) EXIT\n");

        printf("Your Input: ");
        scanf("%d", &menuB);
        printf("\n");

        if (menuB == 1)
        {
            // Datei A, 
            // Datei erfolgreich geoeffnet/erstellt zum schreiben ans Dateiende.
            datei_a();
            break;
        }
        else if (menuB == 2)
        {
            // Datei B
            // Datei erfolgreich geoeffnet/erstellt zum schreiben/überschreiben.
            datei_b();
            break;
        }
        else if (menuB == 3)
        {
            // Datei C
            // Datei erfolgreich geoeffnet zum lesen von integer.
            datei_c();
            break;
        }
        else if (menuB == 4)
        {
            // Datei D
            // Datei erfolgreich geoeffnet zum lesen von string.
            datei_d();
            break;
        }
        else if (menuB == 5)
        {
            // Datei E
            // Datei erfolgreich geoeffnet zum lesen von 2 strings.
            datei_e();
            break;
        }
        else if (menuB == 6)
        {
            // Datei F
            // Datei erfolgreich geoeffnet zum lesen von int Array.
            datei_f();
            break;
        }
        else if (menuB == 7)
        {
            // Datei G
            // Datei erfolgreich geoeffnet zum lesen von int Array.
            datei_g();
            break;
        }
        else
        {
            menuB = 0;
            printf("### END DATA ###\n\n");
        }

        // Funktion
        mainMenu_10(&menuB);
        break;

    default:
        break;
    }

    // reset variable
    menu = 0;

    // goto mainMenu;
    goto mainMenu;
}
