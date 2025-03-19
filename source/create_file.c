#include <stdio.h>
#include <stdlib.h>
 //strcat(x, y);

// CREATE FILES
void create_file(char **language)
{
    // Site Name input **********************
    printf("\nFilename without Extesion: ");
    char siteName[] = "name";
    scanf("%s", &siteName);

    // Copy String
    char dest[100];
    strcpy(dest, siteName);
    
    // Merge String (Extenstion gose defect)
    char Extension[] = ".html";
    strcat(dest, Extension);

    // POINTER
    char *siteNameP = &siteName[0];
    char *siteFileP = &dest[0];
    
    // PRINT CODE ##############################
    printCode(&siteNameP, &siteFileP, &language);
}