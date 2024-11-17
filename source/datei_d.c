//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "../header/datei_d.h"


void datei_d(void)
{
    // Datei öffnen/erstellen schreiben Wort (a)
    char a[] = "Alex";

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
        fprintf(SampleFile, "%s", a);

        printf("Schreibe: Alex\n");
        fclose(SampleFile);
        puts("Datei geschlossen.\n");
    }

    // Datei lesen Wort (r)
    char name[20];
    int iNoRecords = 0;

    strcpy(name,"Noname"); 

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
        while (fscanf(ReadFile, "%s", &name) !=EOF)
        {
            iNoRecords++;
        }

        //printf("Ausgelesener Wert: %c\n", ch);
        printf("Ausgelesener char 0: %c\n", name[0]);
        printf("Ausgelesener Wert: %s\n", name);
        printf("Records: %d\n", iNoRecords);

        fclose(ReadFile);
        puts("Datei geschlossen.\n");
    }
    
}