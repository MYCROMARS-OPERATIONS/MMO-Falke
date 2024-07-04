#include <stdio.h>
#include "../header/structure_h.h"

// Structure H, mit 0 initialisieren
void structure_h(void)
{
    // Struct Name: house
    struct buildings {
        short int apartment_1;
        short int apartment_2;
        //long int apartment_2;
    };
    // Variable all(first) = 0:
    struct buildings house = {0};

    // Output mit 0 initialisiert:
    printf("Output:\n");
    printf("Apartment_1 = %d\n",  house.apartment_1);
    printf("Apartment_2 = %d\n\n",  house.apartment_2);

    // *********************************
    // typedef 
    typedef struct house {
        int x;
        int y;
    } datatype_a;
    
    // Deklaration und Werte zuweisen
    datatype_a point = {5, 8};

    printf("Point x: %d\n", point.x);
    printf("Point y: %d\n\n", point.y);

    // Deklaration
    datatype_a *p_point;

    // Adresszuweisung
    p_point = &point;

    // Werte ändern
    p_point->x = 0;
    p_point->y = 0;

    printf("After Pointer\n");
    printf("Point x: %d\n", point.x);
    printf("Point y: %d\n\n", point.y);

    
}

