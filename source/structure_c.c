#include <stdio.h>
#include <string.h> 
#include "../header/structure_c.h" 

// Structure C, in Structure and Char String.
void structure_c(void)
{
    struct kitchen {
        char breakfast[32];
        char lunch[32];
        char dinner[32];
        char name[32];
    } menu;

    strcpy(menu.breakfast,"Milk"); 
    strcpy(menu.lunch,"Beef"); 
    strcpy(menu.dinner,"Fish"); 
    strcpy(menu.name,"Alex"); 

    printf("My Breakfast: %s.\n", menu.breakfast);
    printf("My Lunch: %s.\n", menu.lunch);
    printf("My Dinner: %s.\n\n", menu.dinner);
    printf("My Name: %s.\n\n", menu.name);


    // Structure in Structure
    struct house {
        short int garage;
        struct kitchen menu;
    } apartment;

    apartment.garage = 2;
    
    strcpy(apartment.menu.breakfast,"Milk and cornflakes"); 
    strcpy(apartment.menu.lunch,"Beef and noodles"); 
    strcpy(apartment.menu.dinner,"Fish and potatoes"); 

    printf("Garage: %d\n", apartment.garage);
    printf("My Breakfast was %s.\n", apartment.menu.breakfast);
    printf("My Lunch was %s.\n", apartment.menu.lunch);
    printf("My Dinner was %s.\n\n", apartment.menu.dinner);
}