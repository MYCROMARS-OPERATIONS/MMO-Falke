// Datei c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Datei lesen Nummer (r)
void datei_c(void)
{
    int a = 0;
    int iNoRecords = 0;
    char x[100];

    FILE *ReadFile;
    ReadFile = fopen("example.dat", "r");
    /*
    if(ReadFile == NULL) 
    {
        puts("Fehler beim Öffnen von example.dat");
        exit (EXIT_FAILURE);
    }
    else
    {
        puts("Datei erfolgreich geoeffnet zum lesen.");
        while (fscanf(ReadFile, "%d", &a) !=EOF)
        {
            iNoRecords++;
        }
        printf("Ausgelesener Wert: %d\n", a);
        printf("Records: %d\n", iNoRecords);
        fclose(ReadFile);
        puts("Datei geschlossen.\n");
    }
    */

    // Read Character
    /*
    if (ReadFile != NULL)
    {
         printf("Read file c\n");
         int c;
         while ( (c = fgetc(ReadFile)) != EOF)
             putchar(c);

         fclose(ReadFile); 
         printf("Ausgelesener Wert: %d\n", c);

    } else printf("Error opening file.\n");
    */


    // Read String, Outout not correct
    /*
    if (ReadFile != NULL){
         printf("Read file\n");
         while ( (x[iNoRecords] = fgetc(ReadFile)) != EOF)
         {
             putchar(x[iNoRecords]);
             iNoRecords++;
         }
         fclose(ReadFile); 
         printf("\nAusgelesener Wert: %s\n", x);
         printf("\n");

    } else printf("Error opening file.\n");
    */

    // Read String
    if(ReadFile == NULL) 
     {
         puts("Fehler beim Öffnen von example.dat");
         exit (EXIT_FAILURE);
     }
     else
     {
         puts("Datei erfolgreich geoeffnet zum lesen.");
         while (fscanf(ReadFile, "%s", &x[0]) !=EOF)
         {
              iNoRecords++;
         }
         printf("Ausgelesener Wert: %s\n", x);
         printf("Records: %d\n", iNoRecords);
         fclose(ReadFile);
         puts("Datei geschlossen.\n\n");
     }
    
}