//#include <stdio.h>
///#include <stdlib.h>
//#include "../header/datei_a.h"

// Datei öffnen/erstellen schreiben Nummer (a)
void datei_a(void)
{
    int a = 200;
     
    FILE *SampleFile;
    SampleFile = fopen("example.dat", "a");

    if(SampleFile == NULL) 
    {
        puts("Fehler beim Öffnen von example.dat");
        exit (EXIT_FAILURE);
    }
    else
    {
        puts("Datei erfolgreich geoeffnet/erstellt zum schreiben ans Dateiende.");
        fprintf(SampleFile, "%d", a);
        fclose(SampleFile);
        puts("Datei geschlossen.\n");
    }
    
}