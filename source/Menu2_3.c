// INPUT MENU 3
void Menu2_3(int *m)
{
    printf("\n*** INPUT MENU ***\n");
    printf("Press: (1) INPUT-A | (2) INPUT-B\n");
    printf("Press: (0) EXIT\n");
    printf("Input: ");

    // Input
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 1: 
        // Funktion
        // Input A, Int, Character, while: char
        //input_a();
        break;

    case 2:
        // Funktion
        // Input B, Number, check if it is correct 
        //input_b();
        break;

    default:
        *m = 0;
        printf("### END Input ###\n\n");
        break;
    }
}