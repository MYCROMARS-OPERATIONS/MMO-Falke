// Datei c
// Datei lesen Nummer (r)
void datei_c(void)
{
    int a = 0;
    int iNoRecords = 0;

    FILE *ReadFile;
    ReadFile = fopen("example.dat", "r");

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
    
}