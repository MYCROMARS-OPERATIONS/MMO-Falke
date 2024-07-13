#include <stdio.h>  
#include "../header/mainMenu.h" 

// STRUKTUR MENU
void mainMenu_8(int *m)
{
    printf("*** STRUCTURE MENU ***\n");
    printf("Press: (1) STRUCTURE-A | (2) STRUCTURE-B | (3) STRUCTURE-C | (4) STRUCTURE-D | (5) STRUCTURE-E\n");
    printf("Press: (6) STRUCTURE-F | (7) STRUCTURE-G | (8) STRUCTURE-H | (9) STRUCTURE-I | (10) STRUCTURE-J\n");
    printf("Press: (11) STRUCTURE-K\n");
    printf("Press: (0) EXIT\n");

    printf("Your Input: ");
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT STRUCTURE ###\n\n");
        break;

    case 1:
        // Structure A
        structure_a();
        break;

    case 2:
        // Structure B
        structure_b();
        break;

    case 3:
        // Structure C
        structure_c();
        break;

    case 4:
        // Structure D
        structure_d();
        break;

    case 5:
        // Structure E
        structure_e();
        break;

    case 6:
        // Structure F
        structure_f();
        break;

    case 7:
        // Structure G
        structure_g();
        break;

    case 8:
        // Structure H
        structure_h();
        break;

    case 9:
        // Structure I
        structure_i();
        break;

    case 10:
        // Structure J
        structure_j();
        break;

    case 11:
        // Structure K
        structure_k();
        break;
   
    default:
        *m = 0;
        printf("### END STRUCTURE ###\n\n");
        break;
    }
}