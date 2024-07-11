#include <stdio.h>  
#include "../header/mainMenu.h" 

// INPUT MENU
void mainMenu_10(int *m)
{
    printf("*** DATA MENU ***\n");
    printf("Press: (1) DATA-A | (2) DATA-B | (3) DATA-C | (4) DATA-D | (5) DATA-E\n");
    printf("Press: (6) DATA-F | (7) DATA-G | (0) EXIT\n");

    printf("Your Input: ");
    scanf("%d", m);
    printf("\n");

    if (*m == 1)
    {
        // Datei A, 
        // Datei erfolgreich geoeffnet/erstellt zum schreiben ans Dateiende.
        datei_a();
    }
    else if (*m == 2)
    {
        // Datei B
        // Datei erfolgreich geoeffnet/erstellt zum schreiben/überschreiben.
        datei_b();
    }
    else if (*m == 3)
    {
        // Datei C
        // Datei erfolgreich geoeffnet zum lesen von integer.
        datei_c();
    }
    else if (*m == 4)
    {
        // Datei D
        // Datei erfolgreich geoeffnet zum lesen von string.
        datei_d();
    }
    else if (*m == 5)
    {
        // Datei E
        // Datei erfolgreich geoeffnet zum lesen von 2 strings.
        datei_e();
    }
    else if (*m == 6)
    {
        // Datei F
        // Datei erfolgreich geoeffnet zum lesen von int Array.
        datei_f();
    }
    else if (*m == 7)
    {
        // Datei G
        // Datei erfolgreich geoeffnet zum lesen von int Array.
        datei_g();
    }
    else
    {
        *m = 0;
        printf("### END DATA ###\n\n");
    }
}