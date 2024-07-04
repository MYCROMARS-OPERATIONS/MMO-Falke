#include <stdio.h>
#include "../header/structure_i.h"

// typedef Struktur definieren
typedef struct house2 {
    int a;
    int b;
} datatype_b;

// Funktion print, definieren
void print(datatype_b point_c){
    printf("data a: %d, data b: %d\n\n", point_c.a, point_c.b);
}

// Funktion, definition Pointer, Zuweisung, Werte ändern
void del(datatype_b *point_bp){
    point_bp->a = 0;
    point_bp->b = 0;
}

// Hauptfunktion I
void structure_i(void)
{
    // typedef Struktur definieren
    typedef struct house {
        int x;
        int y;
    } datatype_a;
    
    // Deklaration und Werte zuweisen
    datatype_a point_a = {5, 8};

    printf("Point x: %d\n", point_a.x);
    printf("Point y: %d\n\n", point_a.y);

    // Deklaration
    datatype_a *point_ap;

    // Adresszuweisung
    point_ap = &point_a;

    // Werte ändern
    point_ap->x = 0;
    point_ap->y = 0;

    printf("After Pointer\n");
    printf("Point x: %d\n", point_a.x);
    printf("Point y: %d\n\n", point_a.y);

    // ********************************** Struktur Ausserhalb
    // Deklaration und Werte zuweisen
    datatype_b point_b = {1, 2};

    // Werte ändern
    point_b.a = 10;
    point_b.b = 100;

    // Funktionsaufruf Print
    print(point_b);

    // Funktionsaufruf Pointer Adresse übergeben
    del(&point_b);

    // Print out
    printf("After Pointer\n");
    print(point_b);

}

