#include <stdio.h>
#include <string.h>
// #include <windows.h> 
#include "../header/structure_k.h"

typedef struct _quest_
{
    int point;
    char questtion_to_answer[255];
    char answer[255];
} Question;

void welcome_screen()
{
    printf("Willkommen bei LyriX\n"
    ".............................\n"
    "Druecke 's', um zu starten.\n\n");
}

void qustion_method(Question q, int **points1)
{
    char input[255];

    // Bilschirm löschen
    // system("cls");

    printf("POINT: %d\n", **points1);
    printf("%s\n", q.questtion_to_answer);
    printf("Antwort: ");

    // Input von maximal 255 Zeichen
    scanf("%255s", &input[0]);

    if(strcmp(q.answer, input) == 0)
    {
        printf("KORREKT!\n\n");
        **points1 += q.point;
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
            qustion_method(q1, &points);
            qustion_method(q2, &points);
            qustion_method(q3, &points);

        }
    }
}
