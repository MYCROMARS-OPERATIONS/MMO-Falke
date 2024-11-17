//#include <stdio.h>
//#include <stdlib.h>
//#include "../header/malloc_b.h"

// Storage reservation

int *iArray(unsigned int n) {
    int *iptr = malloc(n*(sizeof(int)));

    if(iptr !=NULL) {
        for (unsigned int i=0; i<n; i++) {
            iptr[i] = i*i;
        }
    }
    printf("n * sizeof int: %ld\n", n * sizeof(int));
    return iptr;
}


// Malloc Hauptfunktion
int malloc_b(void)
{
    unsigned int val = 0;

    printf("Wie viele Element benoetigen Sie: ");

    // Input
    if (scanf("%u", &val) !=1) {
        printf("Fehler bei der Eingabe\n");
        return EXIT_FAILURE;
    }
    
    // malloc 
    // *arr = iptr
    int *arr = iArray(val);

    if (arr == NULL) {
        printf("Fehler bei der Spiecherreservierung!\n");
        return EXIT_FAILURE;
    }

    // Output
    printf("Ausgabe der Elemente:\n");

    for (unsigned i=0; i<val; i++) {
        printf("arr[%u] = %u\n", i, arr[i]);

    }
    printf("\n");

    // Speicher
    if (arr != NULL) {
        // Speicher Freigabe
        free(arr);
    }

    return EXIT_SUCCESS;
}