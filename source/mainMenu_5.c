// POINTER MENU 5
void mainMenu_5(int *m, char **nameP)
{
    printf("\n*** POINTER MENU ***\n");
    printf("Press: (1) POINTER-A | (2) POINTER-B | (3) POINTER-C | (4) POINTER-D | (5) POINTER-E\n");
    printf("Press: (6) POINTER-F | (7) POINTER-G | (0) EXIT\n");
    printf("Your Input: ");

    // Input
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT Pointer ###\n\n");
        break;

    case 1:
        // Funktion
        // Pointer A
        // Pointer of Int
        pointerA();
        break;

    case 2:
        // Funktion
        // Pointer B
        // Pointer of Array
        pointerB();
        break;

    case 3:
        // Funktion
        // Pointer C
        // Pointer of Array
        pointerC();
        break;

    case 4:
        // Pointer D
        // Pointer to Function
        int ival = 1234567;

        // Funktion
        // Address of int to Function
        pointerD(&ival);
        printf("Int value: %d\n\n", ival);
        break;

    case 5:
        // Pointer E
        int ival0 = 20304050;

        // Address of int to Pointer
        int *v = &ival0;

        // Funktion
        // Address of Pointer to Function
        pointerE(v);

        printf("Int value: %d\n\n", ival0);
        break;

    case 6:
        // Pointer F
        // change Pointer Address
        int val1 = 100;
        int val2 = 200;
        int *p;

        // Address 1 of int to Pointer --------------------- 1
        p = &val1;
        printf("Int val1: %d\n\n", val1);

        // Funktion
        // Address 1 of Pointer to Function
        pointerF(p);
        printf("Int val1: %d\n\n", val1);


        // Address 2 of int to Pointer --------------------- 2
        p = &val2;
        printf("Int val2: %d\n\n", val2);

        // Funktion
        // Address 2 of Pointer to Function
        pointerF(p);
        printf("Int val2: %d\n\n", val2);
        break;

    case 7:
        // Pointer G
        // Char String
        //*nameP = "Barlin to";
        printf("Pointer Pointer **: %s\n", *nameP);

        char siteName[] = "index";
        printf("Site Name: %s\n", siteName);

        *nameP = siteName;
        printf("Site Name Pointer: %s\n", *nameP);
        
        char Extension[] = ".html";

        // Copy string to tring
        strcat(siteName, Extension);
        printf("Site Name + Extension0: %s\n", siteName);
        printf("Site Name Pointer: %s\n\n", *nameP);

        //changeName[0] = **namePP;
        //printf("Change to: %s\n", changeName);

        // Function
        pointerG(&nameP);
    break;
    
    default:
        *m = 0;
        printf("### END Pointer ###\n\n");
        break;
    }
}