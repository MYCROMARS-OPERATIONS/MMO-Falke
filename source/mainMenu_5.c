#include <stdio.h>  
#include "../header/mainMenu.h" 

// POINTER MENU
void mainMenu_5(int *m)
{
    printf("*** POINTER MENU ***\n");
    printf("Press: (1) POINTER-A | (2) POINTER-B | (3) POINTER-C | (4) POINTER-D | (5) POINTER-E\n");
    printf("Press: (6) POINTER-F | (0) EXIT\n");
    printf("Your Input: ");
    scanf("%d", m);
    printf("\n");

    if (*m == 1)
    {
        // Pointer A
        pointerA();
    }
    else if (*m == 2)
    {
        // Pointer B
        pointerB();
    }
    else if (*m == 3)
    {
        // Pointer C
        pointerC();
    }
    else if (*m == 4)
    {
        // Pointer D, Address of int to Function
        int ival = 1234567;
        pointerD(&ival);

        printf("Int value: %d\n\n", ival);
    }
    else if (*m == 5)
    {
        // Pointer E
        int ival = 20304050;

        // Address of int to Pointer
        int *v = &ival;

        // Address of Pointer to Function
        pointerE(v);

        printf("Int value: %d\n\n", ival);
    }
    else if (*m == 6)
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
    }
    else if (*m == 0)
    {
        *m = 0;
        printf("### EXIT Pointer ###\n\n");
    }
    else
    {
        *m = 0;
        printf("### END Pointer ###\n\n");
    }
}