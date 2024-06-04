#include <stdio.h>
#include <string.h> 
#include "../header/structure_d.h" 

// Structure D
void structure_d(void)
{
    struct ZLB {
        long int postleitzahl;
        
    } book;

    book.postleitzahl = 11111;

    printf("Postleitzahl: %ld.\n\n", book.postleitzahl);
}
