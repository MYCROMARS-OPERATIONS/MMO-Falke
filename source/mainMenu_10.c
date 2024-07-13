#include <stdio.h>  
#include "../header/mainMenu.h" 

// DATA MENU
void mainMenu_10(int *m)
{
    printf("*** DATA MENU ***\n");
    printf("Press: (1) DATA-A | (2) DATA-B | (3) DATA-C | (4) DATA-D | (5) DATA-E\n");
    printf("Press: (6) DATA-F | (7) DATA-G | (0) EXIT\n");

    printf("Your Input: ");
    scanf("%d", m);
    printf("\n");

    switch (*m)
    {
    case 0:
        *m = 0;
        printf("### EXIT MALLOC ###\n\n");
        break;

    case 1:
        // Data A, 
        // Datei erfolgreich geoeffnet/erstellt zum schreiben ans Dateiende.
        datei_a();
        break;

    case 2:
        // Data B
        // Datei erfolgreich geoeffnet/erstellt zum schreiben/überschreiben.
        datei_b();
        break;

    case 3:
        // Data C
        // Datei erfolgreich geoeffnet zum lesen von integer.
        datei_c();
        break;

    case 4:
        // Data D
        // Datei erfolgreich geoeffnet zum lesen von string.
        datei_d();
        break;

    case 5:
        // Data E
        // Datei erfolgreich geoeffnet zum lesen von 2 strings.
        datei_e();
        break;

    case 6:
        // DataF
        // Datei erfolgreich geoeffnet zum lesen von int Array.
        datei_f();
        break;

    case 7:
        // Data G
        // Datei erfolgreich geoeffnet zum lesen von int Array.
        datei_g();
        break;
    
    default:
        *m = 0;
        printf("### END DATA ###\n\n");
        break;
    }
}