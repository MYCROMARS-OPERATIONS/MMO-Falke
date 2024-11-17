// Structure B
// Structure define short int
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
    person1.n[1] = 'R';

    
    strcpy(person1.name,"Alex Rudi"); 

    // Output
    printf("Zeichen 1: %c\n\n", person1.a); // A

    printf("Zeichen 1 im Array n: %c\n", person1.n[0]); // A
    printf("Zeichen 2 im Array n: %c\n\n", person1.n[1]); // R

    strcpy(person1.n,"XY"); 
    printf("Char Array n string: %s\n", person1.n);

    printf("Char Array name: %s\n\n", person1.name); // Alex Rudi
}