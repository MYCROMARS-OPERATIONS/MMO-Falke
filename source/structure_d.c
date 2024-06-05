#include <stdio.h>
#include <string.h> 
#include "../header/structure_d.h" 

// Structure D
void structure_d(void)
{
    struct ZLB {
        long int postleitzahl;
        float zahl1;
        double zahl2;
        
    } book;

    book.postleitzahl = 2100100100;
    book.zahl1 = 2100100100;
    book.zahl2 = 2100100100;

    printf("Postleitzahl long int: %ld\n\n", book.postleitzahl);

    printf("Zahl 1 float %%f: %f\n", book.zahl1);
    printf("Zahl 1 float %%.0f: %.0f\n", book.zahl1);
    printf("Zahl 1 float %%.1f: %.1f\n\n", book.zahl1);

    printf("Zahl 1 double %%f: %f\n", book.zahl1);
    printf("Zahl 1 double %%.0f: %.0f\n", book.zahl1);
    printf("Zahl 1 double %%.1f: %.1f\n", book.zahl1);
    printf("Zahl 1 double %%g: %g\n", book.zahl1);
    printf("Zahl 1 double %%e: %e\n", book.zahl1);
}
