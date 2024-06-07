#include <stdio.h>
#include <string.h>
#include "../header/structure_b.h" 

// Structure B
void structure_b(void)
{
    struct house {
        short int window;
        short int door;
    // Input:
    } apartment1 = {4, 3}, apartment2 = {7, 4};

    // Output
    printf("The Apartment 1 has %d Windows, and %d Doors.\n", apartment1.window, apartment1.door);
    printf("The Apartment 2 has %d Windows, and %d Doors.\n\n", apartment2.window, apartment2.door);

    // Char, Char Array
    struct character {
        char a;
        char n[3];      // muss 1 zeichen mehr sein als benötigt
        char name[32];
    } person1;

    // Input
    person1.a = 'A';
    person1.n[0] = 'A';
    person1.n[1] = 'B';

    strcpy(person1.name,"Name1"); 

    // Output
    printf("Zeichen 1: %c\n", person1.a);
    printf("Zeichen im Array: %c\n", person1.n[1]);
    printf("Char Array 1: %s\n", person1.n);
    printf("Char Array 2: %s\n\n", person1.name);
}