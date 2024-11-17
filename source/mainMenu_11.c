// TIME MENU 11
void mainMenu_11(int *m)
{
    printf("\n*** TIME ***\n");
    printf("Press: (1) TIME-A | (2) TIME-B | (2) TIME-C | (0) EXIT\n");

    printf("Your Input: ");

    // Input
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT TIME ###\n\n");
        break;

    case 1:
        // Time A
        time_a();
        break;

    case 2:
        // Time B
        time_b();
        break;
    
    case 3:
        // Time C
        time_c();
        break;

    default:
        *m = 0;
        printf("### END TIME ###\n\n");
        break;
    }
}