//#include <stdio.h>  
//#include "../header/mainMenu.h" 

// DELAY MENU
void mainMenu_2(int *m)
{
    int timer = 0;
    
    printf("\n*** DELAY ***\n");
    printf("Input a number (1-10): ");

    // Input
    scanf("%d", &timer);

    // Funktion
    delay_a(timer);
    timer = 0;
}