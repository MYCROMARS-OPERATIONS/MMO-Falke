//#include <stdio.h>  
//#include "../header/mainMenu.h" 

// ARRAY MENU
void mainMenu_6(int *m)
{
    printf("\n*** ARRAY MENU ***\n");
    printf("Press: (1) ARRAY-A | (2) ARRAY-B | (3) ARRAY-C | (4) ARRAY-D | (5) ARRAY-E\n");
    printf("Press: (6) ARRAY-F | (0) EXIT\n");
    printf("Your Input: ");

    // Input
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT Array ###\n\n");
        break;

    case 1:
        // Funktion
        // Array A
        // Int Array []
        arrayA();
        break;

    case 2:
        // Funktion
        // Array B
        // Int Array [] []
        arrayB();
        break;

    case 3:
        // Funktion
        // Array C
        // float Array [] scanf()
        arrayC();
        break;

    case 4:
        // Funktion
        // Array D
        // int Array switch number
        arrayD();
        break;

    case 5:
        // Funktion
        // Array E
        // int Array dublicate numbers
        arrayE();
        break;

    case 6:
        // Funktion
        // Array F
        // char Array
        arrayF();
        break;
    
    default:
        *m = 0;
        printf("### END Array ###\n\n");
        break;
    }
}