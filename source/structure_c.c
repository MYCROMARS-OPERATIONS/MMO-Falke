#include <stdio.h>
#include <string.h> 
#include "header/structure_c.h" 

// Structure C
// Structure in Structure and Char String.
void structure_c(void)
{
    struct kitchen {
        char breakfast[32];
        char lunch[32];
        char dinner[32];
    } menu1;

    struct house {
        struct kitchen menu1;
    } apartment1;
    
    strcpy(apartment1.menu1.breakfast,"Milk and cornflakes"); 
    strcpy(apartment1.menu1.lunch,"Beef and noodles"); 
    strcpy(apartment1.menu1.dinner,"Fish and potatoes"); 

    printf("My Breakfast was %s.\n", apartment1.menu1.breakfast);
    printf("My Lunch was %s.\n", apartment1.menu1.lunch);
    printf("My Dinner was %s.\n\n", apartment1.menu1.dinner);
}