// INPUT MENU 3
void Menu_Files(char *name)
{
    printf("\n*** Menu Files ***\n");
    printf("Press: 1 HTML | 0 EXIT\n");

    printf("Language:%s\n", name);
    printf("Input: ");

    int m = 0;
    // Input
    scanf("%d", m);
    printf("\n");

    switch (m)
    {
    case 0: 
        // *------------- Exit -------------*
        Menu2_0();
        break;
    
    case 1: 
        // HTML
        file();
        break;

    case 2:
        // Funktion
        // Input B, Number, check if it is correct 
        //input_b();
        break;

    default:
        m = 0;
        printf("### END ###\n\n");
        // *------------- Exit -------------*
        Menu2_0();
        break;
    }
}