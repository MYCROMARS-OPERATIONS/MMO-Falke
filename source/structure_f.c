#include <stdio.h>
#include "../header/structure_f.h"

// Structure F
// copy Structure
void structure_f(void)
{
    // Struct Name: house
    struct house {
        short int apartment;
    };
    // Struct Variable name, Array:
    struct house house1, house2;

    // struct
    house1.apartment = 4;
    
    // copy 
    house2 = house1;

    // Output
    printf("Output:\n");
    printf("House 1 has %d Apartments.\n",  house1.apartment);
    printf("Copy Structure 1 to Structure 2.\n\n");
    printf("House 2 has %d Apartments.\n\n",  house2.apartment);
}