// Structure E
// with Array
void structure_e(void)
{
    // Struct Name: house
    struct house {
        short int apartment_persons[3];
    };
    // Struct Variable name, Array:
    struct house house[3];

    // Input
    house[0].apartment_persons[0] = 1;
    house[0].apartment_persons[1] = 5;
    house[0].apartment_persons[2] = 2;

    house[1].apartment_persons[0] = 3;
    house[1].apartment_persons[1] = 2;
    house[1].apartment_persons[2] = 1;

    house[2].apartment_persons[0] = 5;
    house[2].apartment_persons[1] = 4;
    house[2].apartment_persons[2] = 3;

    // Output
    printf("Output:\n");
    printf("In House 1, Apartment 1 are %d Persons.\n",  house[0].apartment_persons[0]);
    printf("In House 1, Apartment 2 are %d Persons.\n",  house[0].apartment_persons[1]);
    printf("In House 1, Apartment 3 are %d Persons.\n\n",  house[0].apartment_persons[2]);

    printf("In House 2, Apartment 1 are %d Persons.\n",  house[1].apartment_persons[0]);
    printf("In House 2, Apartment 2 are %d Persons.\n",  house[1].apartment_persons[1]);
    printf("In House 2, Apartment 3 are %d Persons.\n\n",  house[1].apartment_persons[2]);

    printf("In House 3, Apartment 1 are %d Persons.\n",  house[2].apartment_persons[0]);
    printf("In House 3, Apartment 2 are %d Persons.\n",  house[2].apartment_persons[1]);
    printf("In House 3, Apartment 3 are %d Persons.\n\n",  house[2].apartment_persons[2]);
}