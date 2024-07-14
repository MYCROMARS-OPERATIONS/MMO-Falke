#include <stdio.h>
#include <string.h>
#include "../header/structure_j.h"

// Structure with Pointer
typedef struct _Rechteck_
{
    int hoehe;
    int breite;
    char farbe[25];
} Rechteck;

// Print
void print2(Rechteck r)
{
    printf("Hoehe: %d, Breite: %d, Farbe: %s\n\n", r.hoehe, r.breite, r.farbe);
}

// Funktion 3
void verdoppeleHoehe(Rechteck ***r)
{
    (**r)->hoehe = (**r)->hoehe * 2;
}

// Funktion 2
void verdoppeleBreite(Rechteck **r)
{
    (*r)->breite = (*r)->breite * 2;

    // Funktionsaufruf mit Pointer
    verdoppeleHoehe(&r);
}

// Funktion 1
void changeColor(Rechteck *r)
{
    strcpy(r->farbe, "Schwarz");

    // Funktionsaufruf mit Pointer
    verdoppeleBreite(&r);
}


// Hauptfunktion J
void structure_j(void)
{
    // Struktur Name deklaration r1, und Werte zuweisen
    Rechteck r1 = {5, 10, "Rot"};

    // Ausgabe:
    printf("Werte r1: \n");
    print2(r1);

    // Struktur Name deklaration r2
    Rechteck r2;

    // Werte zuweisen
    r2.hoehe = 3;
    r2.breite = 2;

    // benötigt #include <string.h>
    strcpy(r2.farbe, "Gelb"); 

    // Ausgabe:
    printf("Werte r2: \n");

    // Funktionsaufruf Print
    print2(r2);

    // Funktionsaufruf
    changeColor(&r1);

    // Ausgabe:
    printf("Werte r1: \n");
    // Funktionsaufruf Print
    print2(r1);
}
