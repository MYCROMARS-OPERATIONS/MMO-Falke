#include <stdio.h>
#include "../header/structure_a.h"

// Structure A
void structure_a(void)
{
    struct house {
        int window;
        int door;
    };
    struct house apartment1;

    apartment1.window = 4;
    apartment1.door = 3;
    

    printf("The Apartment 1 has %d Windows, and %d Doors.\n\n", apartment1.window, apartment1.door);
}