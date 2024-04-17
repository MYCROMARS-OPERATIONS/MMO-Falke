#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../header/datei_e.h"

void datei_e(void)
{
    // Datei öffnen/erstellen schreiben 2 Worte (a)
    char vorname_a[] = "Alex";
    char name_a[] = "Rudi";
    FILE *SampleFile;
    SampleFile = fopen("example.dat", "w");

    if(SampleFile == NULL) 
    {
        puts("Fehler beim Öffnen von example.dat");
        exit (EXIT_FAILURE);
    }
    else
    {
        puts("Datei erfolgreich geoeffnet/erstellt zum schreiben/ueberschreiben.");
        fprintf(SampleFile, "%s\n%s", vorname_a, name_a);
        //fprintf(SampleFile, "%s", name);
        fclose(SampleFile);
        puts("Datei geschlossen.\n");
    }

    // Datei lesen 2 Worte (r)
    char vorname[20];
    char name[20];
    int iNoRecords = 0;

    FILE *ReadFile;
    ReadFile = fopen("example.dat", "r");

    if(ReadFile == NULL) 
    {
        puts("Fehler beim oeffnen von example.dat");
        exit (EXIT_FAILURE);
    }
    else
    {
        puts("Datei erfolgreich geoeffnet zum lesen.");
        while (fscanf(ReadFile, "%s\n %s", &vorname, &name) !=EOF)
        {
            iNoRecords++;
        }

        //printf("Ausgelesener Wert: %c\n", ch);
        printf("Ausgelesener Wert: %s\n", vorname);
        printf("Ausgelesener Wert: %s\n", name);
        printf("Records: %d\n", iNoRecords);
        fclose(ReadFile);
        puts("Datei geschlossen.\n");
    }
    
}