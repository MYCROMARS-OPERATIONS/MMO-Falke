// Structure G
// Pointer of Structure Variable, sizeof
void structure_g(void)
{
    // Struct Name: house
    struct buildings {
        short int apartment_1;
        //short int apartment_2;
        long int apartment_2;
    };
    // Struct Variable name:
    struct buildings house, *house_pointer;

    // Input
    house.apartment_1 = 5;
    house.apartment_2 = 10;

    // Pointer
    house_pointer = &house;

    // Output
    printf("Output:\n");
    printf("House = %lu Bytes\n",  sizeof(house));
    printf("Apartment_1 size = %lu Bytes\n",  sizeof(house.apartment_1));
    printf("Apartment_2 size = %lu Bytes\n\n",  sizeof(house.apartment_2));

    printf("House Address is: %p\n\n",  &house);

    printf("Apartment_1 has %hd rooms.\n",  house.apartment_1);
    printf("Apartment_2 has %ld rooms.\n\n",  house.apartment_2);

    printf("Apartment_1 Address is: %p\n",  &house.apartment_1);
    printf("Apartment_2 Address is: %p\n\n",  &house.apartment_2);

    printf("Pointer:\n");
    printf("House_Pointer = %lu Bytes\n\n", sizeof(*house_pointer));

    printf("House_Pointer Address is: %p\n\n",  &house_pointer);

    printf("Pointer Apartment_1 has %hd rooms.\n",  house_pointer->apartment_1);
    printf("Pointer Apartment_2 has %ld rooms.\n\n",  house_pointer->apartment_2);
    
    printf("Pointer Apartment_1 Address is: %p\n",  &house_pointer->apartment_1);
    printf("Pointer Apartment_2 Address is: %p\n\n",  &house_pointer->apartment_2);
}