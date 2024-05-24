#include <stdio.h>
#include "../header/structure_a.h"

// Structure A
void structure_a(void)
{
    // Method 1 ***********************************************************************************
    // Struct Name: house
    struct house {
        int window;
        int door;
    };
    // Variable group name:
    struct house apartment1, apartment2;

    // Werte zuweisen:
    apartment1.window = 1;
    apartment1.door = 2;

    apartment2.window = 3;
    apartment2.door = 4;
    
    // Ausgabe:
    printf("Method 1:\n");
    printf("The Apartment 1 has %d Windows, and %d Doors.\n", apartment1.window, apartment1.door);
    printf("The Apartment 2 has %d Windows, and %d Doors.\n\n", apartment2.window, apartment2.door);


    // Method 2 ***********************************************************************************
    // Struct Name: house2
    struct house2 {
        int window;
        int door;
    // Variable group name:
    } apartment3, apartment4;

    // Werte zuweisen:
    apartment3.window = 5;
    apartment3.door = 6;

    apartment4.window = 8;
    apartment4.door = 9;

    // Ausgabe:
    printf("Method 2:\n");
    printf("The Apartment 3 has %d Windows, and %d Doors.\n", apartment3.window, apartment3.door);
    printf("The Apartment 4 has %d Windows, and %d Doors.\n\n", apartment4.window, apartment4.door);
}