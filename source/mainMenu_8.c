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

    if (*m == 1)
    {
        // Structure A
        structure_a();
    }
    else if (*m == 2)
    {
        // Structure B
        structure_b();
    }
    else if (*m == 3)
    {
        // Structure C
        structure_c();
    }
    else if (*m == 4)
    {
        // Structure D
        structure_d();
    }
    else if (*m == 5)
    {
        // Structure E
        structure_e();
    }
    else if (*m == 6)
    {
        // Structure F
        structure_f();
    }
    else if (*m == 7)
    {
        // Structure G
        structure_g();
    }
    else if (*m == 8)
    {
        // Structure H
        structure_h();
    }
    else if (*m == 9)
    {
        // Structure I
        structure_i();
    }
    else if (*m == 10)
    {
        // Structure J
        structure_j();
    }
    else if (*m == 11)
    {
        // Structure K
        structure_k();
    }
    else if (*m == 0)
    {
        *m = 0;
        printf("### EXIT STRUCTURE ###\n\n");
    }
    else
    {
        *m = 0;
        printf("### END STRUCTURE ###\n\n");
    }
}