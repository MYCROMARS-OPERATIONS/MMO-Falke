#include <stdio.h>
#include <string.h> 
#include "../header/structure_c.h" 

// Structure C, in Structure and Char String.
void structure_c(void)
{
    // Structure 1
    struct kitchen {
        char breakfast[32];
        char lunch[32];
        char dinner[32];
        char name[32];
    } menu;

    // Input
    strcpy(menu.breakfast,"Milk"); 
    strcpy(menu.lunch,"Beef"); 
    strcpy(menu.dinner,"Fish"); 
    strcpy(menu.name,"Alex"); 

    // Output
    printf("My Breakfast: %s\n", menu.breakfast);
    printf("My Lunch: %s\n", menu.lunch);
    printf("My Dinner: %s\n\n", menu.dinner);
    printf("My Name is: %s\n\n", menu.name);


    // Structure in Structure *****************************
    struct house {
        short int garage;

        // Structure 1
        struct kitchen menu;

        // Structure 2
        struct room {
            char lastname[10];
        } person;

    } apartment;

    // Input
    apartment.garage = 2;
    
    strcpy(apartment.menu.breakfast,"Milk and cornflakes"); 
    strcpy(apartment.menu.lunch,"Beef and noodles"); 
    strcpy(apartment.menu.dinner,"Fish and potatoes"); 
    strcpy(apartment.menu.name,"Alex Rudi"); 
    
    strcpy(apartment.person.lastname,"Rudi"); 

    // Output
    printf("Garage: %d\n", apartment.garage);
    printf("My Breakfast was %s.\n", apartment.menu.breakfast);
    printf("My Lunch was %s.\n", apartment.menu.lunch);
    printf("My Dinner was %s.\n\n", apartment.menu.dinner);
    printf("My fullname was %s.\n\n", apartment.menu.name);
    
    printf("My last Name is %s.\n\n", apartment.person.lastname);
}