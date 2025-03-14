// MENU Website
void menu_website(int *m)
{
    printf("\n*** MENU WEBSITE ***\n");
    printf("Press: (1) NEW PROJECT | (2) DATA-B\n");
    printf("Press: (0) EXIT\n");

    printf("Your Input: ");

    // Input
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT MALLOC ###\n\n");
        break;

    case 1:
        // Project Name
        //projectName();
        break;

   

    
    default:
        *m = 0;
        printf("### END DATA ###\n\n");
        break;
    }
}