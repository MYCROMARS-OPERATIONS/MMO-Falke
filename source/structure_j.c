#include <stdio.h>
#include <string.h>
#include "../header/structure_j.h"

typedef struct _Rechteck_
{
    int hoehe;
    int breite;
    char farbe[25];
} Rechteck;

void print2(Rechteck r)
{
    printf("Hoehe: %d, Breite: %d, Farbe: %s\n\n", r.hoehe, r.breite, r.farbe);
}

// Haupt Funktion J
void structure_j(void)
{
    Rechteck r1 = {5, 10, "Rot"};

    // Ausgabe
    print2(r1);

    Rechteck r2;
    r2.hoehe = 3;
    r2.breite = 2;
    strcpy(r2.farbe, "Gelb");

    // Ausgabe neue Werte:
    printf("Neue Werte:\n");
    print2(r2);
}
