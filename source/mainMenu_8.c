#include <stdio.h>  
#include "../header/mainMenu.h" 

// STRUKTUR MENU
void mainMenu_8(int *m)
{
    printf("\n*** STRUCTURE MENU ***\n");
    printf("Press: (1) STRUCTURE-A | (2) STRUCTURE-B | (3) STRUCTURE-C | (4) STRUCTURE-D | (5) STRUCTURE-E\n");
    printf("Press: (6) STRUCTURE-F | (7) STRUCTURE-G | (8) STRUCTURE-H | (9) STRUCTURE-I | (10) STRUCTURE-J\n");
    printf("Press: (11) STRUCTURE-K\n");
    printf("Press: (0) EXIT\n");

    printf("Your Input: ");

    // Input
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT STRUCTURE ###\n\n");
        break;

    case 1:
        // Funktion
        // Structure A
        // Structure define int
        structure_a();
        break;

    case 2:
        // Funktion
        // Structure B
        // Structure define short int
        structure_b();
        break;

    case 3:
        // Funktion
        // Structure C
        // Structure in Structure and Char String.
        structure_c();
        break;

    case 4:
        // Funktion
        // Structure D
        // long, float, double
        structure_d();
        break;

    case 5:
        // Funktion
        // Structure E
        // with Array
        structure_e();
        break;

    case 6:
        // Funktion
        // Structure F
        // copy Structure
        structure_f();
        break;

    case 7:
        // Funktion
        // Structure G
        // Pointer of Structure Variable, sizeof
        structure_g();
        break;

    case 8:
        // Funktion
        // Structure H
        // with 0 initialize
        structure_h();
        break;

    case 9:
        // Funktion
        // Structure I
        // typedef 
        structure_i();
        break;

    case 10:
        // Funktion
        // Structure J
        // Structure with Pointer
        structure_j();
        break;

    case 11:
        // Funktion
        // Structure K
        // Structure with Pointer Pointer
        structure_k();
        break;
   
    default:
        *m = 0;
        printf("### END STRUCTURE ###\n\n");
        break;
    }
}