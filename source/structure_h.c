// Structure H
// with 0 initialize
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
}

