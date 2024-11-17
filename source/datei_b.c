// Datei b
// Datei schreiben/überschreiben Nummer (w)
void datei_b(void)
{
    int a = 100;

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
        fprintf(SampleFile, "%d", a);
        fclose(SampleFile);
        puts("Datei geschlossen.\n");
    }
    
}