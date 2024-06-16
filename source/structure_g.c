#include <stdio.h>
#include "../header/structure_g.h"

// Structure G, Pointer of Structure Variable
void structure_g(void)
{
    // Struct Name: house
    struct buildings {
        short int apartment_1;
        long int apartment_2;
    };
    // Struct Variable name, Array:
    struct buildings house, *house_pointer;

    // Input
    house.apartment_1 = 2;
    house.apartment_2 = 4;

    // Pointer
    house_pointer = &house;

    // Output
    printf("Output:\n");
    printf("House = %u (%u) Bytes\n",  sizeof(house), sizeof(*house_pointer));
    
}