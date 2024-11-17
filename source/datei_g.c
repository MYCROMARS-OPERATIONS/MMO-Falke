//#include <stdio.h>
//#include <stdlib.h>
//#include "../header/datei_g.h"

void datei_g(void)
{
    // Datei öffnen/erstellen schreiben 2 Nummern (w)
    int number_a[] = {10, 20};
    int number_b[] = {50, 100};
    
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
        fprintf(SampleFile, "%d %d\n%d %d", number_a[0], number_a[1], number_b[0], number_b[1]);
        fclose(SampleFile);
        puts("Datei geschlossen.\n");
    }

    // Datei lesen 2 Nummern (r)
    int number_1[10];
    int number_2[10];
    
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
        while (fscanf(ReadFile, "%d%d\n%d%d", &number_1[iNoRecords], &number_1[iNoRecords+1], &number_2[iNoRecords], &number_2[iNoRecords+1]) !=EOF)
        {
            iNoRecords++;
        }

        printf("Ausgelesener Wert: %d %d\n", number_1[0], number_1[1]);
        printf("Ausgelesener Wert: %d %d\n", number_2[0], number_2[1]);
      
        printf("Records: %d\n", iNoRecords);
        fclose(ReadFile);
        puts("Datei geschlossen.\n");
    }
    
}