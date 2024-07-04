#include <stdio.h>
#include "../header/structure_i.h"

// typedef Struktur definieren
typedef struct house2 {
    int a;
    int b;
} datatype_b;

// Funktion print
void print(datatype_b i){
    printf("data a: %d, data b: %d\n\n", i.a, i.b);
}

// Funktion mit Pointer werte ändern
void del(datatype_b *i){
    i->a = 0;
    i->b = 0;
}

// Structure H, mit 0 initialisieren
void structure_i(void)
{
    // typedef Struktur definieren
    typedef struct house {
        int x;
        int y;
    } datatype_a;
    
    // Deklaration und Werte zuweisen
    datatype_a point = {5, 8};

    printf("Point x: %d\n", point.x);
    printf("Point y: %d\n\n", point.y);

    // Deklaration
    datatype_a *p_point;

    // Adresszuweisung
    p_point = &point;

    // Werte ändern
    p_point->x = 0;
    p_point->y = 0;

    printf("After Pointer\n");
    printf("Point x: %d\n", point.x);
    printf("Point y: %d\n\n", point.y);

    // **********************************
    // Deklaration und Werte zuweisen
    datatype_b point_b = {1, 2};

    // Werte ändern
    point_b.a = 10;
    point_b.b = 100;

    // Funktionsaufruf
    print(point_b);
    del(&point_b);

    printf("After Pointer\n");
    print(point_b);

}

