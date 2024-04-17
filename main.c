/* ****************************************************** */
/*                  MYCROMARS OPERATIONS                  */
/*                       FALKE v0.0.6                     */
/*                      ALEXANDER RUDI                    */
/*                        16.04.2024                      */
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

    /* ****************************************************** */
    /* ********************** MAIN MENU ********************* */
    /* ###################################################### */

    int menu = 0;
    int menuB = 0;
    int timer = 0;

// Go here <<<---
mainMenu:

    printf("********** MAIN MENU ***********\n");
    printf("Press: (1) CALCULATION | (2) DELAY | (3) INPUT     | (4) OUTPUT  | (5) POINTER\n");
    printf("Press: (6) ARRAY       | (7) LOOP  | (8) STRUCTURE | (9) MALLOC | (10) DATEI | (0) EXIT\n");
    // printf("| (8) FILE\n");
    printf("Input: ");
    scanf("%d", &menu);
    printf("\n");
 
    switch (menu)
    {
    case 0:
        //printf("Menu=%d\n", menu);
        printf("%%%%%%%%%%%%%% Program END! %%%%%%%%%%%%%%\n");
        printf("*****************************");
        // exit(1);
        // exit(EXIT_FAILURE);
        exit(EXIT_SUCCESS);
        // return EXIT_FAILURE;
        // return EXIT_SUCCESS;

    case 1:
        // Calculation
        printf("*** CALCULATION ***\n");
        printf("a + b\n");
        calculation();
        break;

    case 2:
        // Delay
        printf("*** DELAY ***\n");
        printf("Input a number: ");
        scanf("%d", &timer);

        // Function
        delayA(timer);
        timer = 0;
        break;

    case 3:
        // *------------- Input Menu -------------*
        printf("*** INPUT MENU ***\n");
        printf("Press: (1) INPUT-A | (2) INPUT-B\n");
        printf("Press: (0) EXIT\n");
        printf("Input: ");
        scanf("%d", &menuB);
        printf("\n");

        if (menuB == 1)
        {
            // Input A
            // Input Character
            inputChar();
            break;
        }
        else if (menuB == 2)
        {
            // Input B
            input_b();
            break;
        }
        else
        {
            menuB = 0;
            printf("### END Input ###\n\n");
        }
        break;

    case 4:
        // Output Hello World
        printf("*** OUTPUT ***\n");
        outputString();
        break;

    case 5:
        // *------------- Pointer Menu -------------*
        printf("*** POINTER MENU ***\n");
        printf("Press: (1) POINTER-A | (2) POINTER-B | (3) POINTER-C | (4) POINTER-D | (5) POINTER-E\n");
        printf("Press: (6) POINTER-F | (0) EXIT\n");
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
        else if (menuB == 3)
        {
            // Pointer C
            pointerC();
            break;
        }
        else if (menuB == 4)
        {
            // Pointer D, Address of int to Function
            int ival = 1234567;
            pointerD(&ival);

            printf("Int value: %d\n\n", ival);
            break;
        }
        else if (menuB == 5)
        {
            // Pointer E
            int ival = 20304050;

            // Address of int to Pointer
            int *v = &ival;

            // Address of Pointer to Function
            pointerE(v);

            printf("Int value: %d\n\n", ival);
            break;
        }
        else if (menuB == 6)
        {
            // Pointer F, change Pointer Address
            int val1 = 100;
            int val2 = 200;
            int *p;


            // Address 1 of int to Pointer --------------------- 1
            p = &val1;
            printf("Int val1: %d\n\n", val1);

            // Address 1 of Pointer to Function
            pointerF(p);
            printf("Int val1: %d\n\n", val1);


            // Address 2 of int to Pointer --------------------- 2
            p = &val2;
            printf("Int val2: %d\n\n", val2);

            // Address 2 of Pointer to Function
            pointerF(p);
            printf("Int val2: %d\n\n", val2);


            break;
        }
        else if (menuB == 0)
        {
            menuB = 0;
            printf("### EXIT Pointer ###\n\n");
        }
        else
        {
            menuB = 0;
            printf("### END Pointer ###\n\n");
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
            printf("### EXIT Array ###\n\n");
        }
        else
        {
            menuB = 0;
            printf("### END Array ###\n\n");
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
            printf("### EXIT Loop ###\n\n");
        }
        else
        {
            menuB = 0;
            printf("### END Loop ###\n\n");
        }
        break;

    case 8:
        // *------------- Structure Menu -------------*
        printf("*** STRUCTURE MENU ***\n");
        printf("Press: (1) STRUCTURE-A | (2) STRUCTURE-B | (3) STRUCTURE-C | (0) EXIT\n");

        printf("Your Input: ");
        scanf("%d", &menuB);
        printf("\n");

        if (menuB == 1)
        {
            // Structure A
            structure_a();
            break;
        }
        else if (menuB == 2)
        {
            // Structure B
            structure_b();
            break;
        }
        else if (menuB == 3)
        {
            // Structure C
            structure_c();
            break;
        }
        else if (menuB == 0)
        {
            menuB = 0;
            printf("### EXIT STRUCTURE ###\n\n");
        }
        else
        {
            menuB = 0;
            printf("### END STRUCTURE ###\n\n");
        }
        break;

    case 9:
        // *------------- Maloc Menu -------------*
        printf("*** MALLOC MENU ***\n");
        printf("Press: (1) MALLOC-A | (2) MALLOC-B | (0) EXIT\n");

        printf("Your Input: ");
        scanf("%d", &menuB);
        printf("\n");

        if (menuB == 1)
        {
            // Malloc A
            malloc_a();
            break;
        }
        else if (menuB == 2)
        {
            // Malloc B
            malloc_b();
            break;
        }
        else if (menuB == 0)
        {
            menuB = 0;
            printf("### EXIT MALLOC ###\n\n");
        }
        else
        {
            menuB = 0;
            printf("### END MALLOC ###\n\n");
        }
        break;

    case 10:
        // *------------- Datei Menu -------------*
        printf("*** DATEI MENU ***\n");
        printf("Press: (1) DATEI-A | (2) DATEI-B | (3) DATEI-C | (4) DATEI-D | (5) DATEI-E\n");
        printf("Press: (6) DATEI-F | (7) DATEI-G | (0) EXIT\n");

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
            printf("### END DATEI ###\n\n");
        }
        break;

    default:
        break;
    }

    // reset variable
    menu = 0;

    // goto mainMenu;
    goto mainMenu;
}
