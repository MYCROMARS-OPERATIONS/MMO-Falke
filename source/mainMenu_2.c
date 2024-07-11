#include <stdio.h>  
#include "../header/mainMenu.h" 

// CALCULTION MENU
void mainMenu_2(int *m)
{
    int timer = 0;
    
    printf("*** DELAY ***\n");
    printf("Input a number: ");
    scanf("%d", &timer);

    // Function
    delayA(timer);
    timer = 0;
}