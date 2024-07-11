#include <stdio.h>
#include <string.h>
#include "../header/structure_k.h"

// Struktur typ
typedef struct _quest_
{
    int point;
    char questtion_to_answer[255];
    char answer[255];
} Question;

// Funktion
void welcome_screen()
{
    // Bilschirm löschen
    system("cls");

    printf("Willkommen bei LyriX\n"
    ".............................\n"
    "Druecke 's', um zu starten: \n");
    printf("Input: ");
}

// Funktion
void qustion_method(Question q, int **points1)
{
    char input[255];
    
    // Ausgabe
    printf("\n%s\n", q.questtion_to_answer);
    printf("Antwort: ");

    // Input von maximal 255 Zeichen
    scanf("%255s", &input[0]);

    // Vergleichen, bei 0 sind sie gleich
    if(strcmp(q.answer, input) == 0)
    {
        printf("KORREKT!\n");
        **points1 += q.point;
        printf("\nPOINTS: %d\n", **points1);
    }
    else
    {
        printf("FALSCH! RICHTIGE ANTWORT: '%s'.\n", q.answer);
    }
}

// Hauptfunktion K
void structure_k(void)
{
    int pp = 0;
    int *points;

    points = &pp;

    /// QUESTION DATABASE
    Question q1 = {1, "Was ist Lyrik? Lyrik ist Dichtung in ...", "Versform"};
    Question q2 = {2, "Die Lyrik gehoert neben der Epik und Dramatik zur ...", 
                    "Gattungstrias"};
    Question q3 = {5, "Seit welchem Jahrhunder wird der " 
                    "Oberbegriff Lyrik \nals Gattungsbegriff verwendet?", "18."};

    welcome_screen();

    getchar();
    if(getchar() == 's'){
        while(*points < 8)
        {
            // Frage 1
            qustion_method(q1, &points);
            if (*points > 7) {break;}

            // Frage 2
            qustion_method(q2, &points);
            if (*points > 7) {break;}

            // Frage 3
            qustion_method(q3, &points);
        }

        // Ende
        if (*points > 7) {
            printf("END\n\n");
        }
    }
}
