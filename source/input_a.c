// Input a
void input_a(void)
{
    char b, id;
    int ch;
    int u;
   
    // getchar() with int
    printf("INPUT int with getchar().\n");
    printf("Input a number: ");
    getchar();
    ch = getchar();
    printf("Your Input: %c\n\n", ch);

    // getchar() with char
    printf("INPUT char with getchar().\n");
    printf("Input a character: ");
    getchar();
    b = getchar();
    printf("Your Input: %c\n\n", b);
    
    // scanf()
    printf("INPUT with scanf().\n");
    printf("Press 'a' for continue: ");
    getchar();
    scanf("%c", &id);

    printf("Your Input: %c\n\n", id);
    printf(id == 'a' ? "You have access!\n" : "You don't have access!\n");

    // continue with a
    if (id == 'a')
    {
        printf("*** ID correct! ***\n\n");

        // getchar() loop
        printf("INPUT int with getchar() loop.\n"); 
        printf("Exit with: WIN: (ctrl + z) | MAC: (control + z)\n");
        printf("Input some characters: ");
        while(1)
        {
            u = getchar();
            if(u == EOF)
            break;

            putchar(u);
        }
    }
    else
    {
        printf("### ID not correct! ###\n\n");
    }
    
}