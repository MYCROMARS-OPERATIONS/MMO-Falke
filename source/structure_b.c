#include <stdio.h>
#include "../header/structure_b.h" 

// Structure B
void structure_b(void)
{
    struct house {
        int window;
        int door;
    // Sofort Wert zuweisen:
    } apartment1 = {4, 3}, apartment2 = {7, 4};
    
    //apartment1.window = 4;
    //apartment1.door = 3;

    //apartment2.window = 7;
    //apartment2.door = 4;

    printf("The Apartment 1 has %d Windows, and %d Doors.\n", apartment1.window, apartment1.door);
    printf("The Apartment 2 has %d Windows, and %d Doors.\n\n", apartment2.window, apartment2.door);
}