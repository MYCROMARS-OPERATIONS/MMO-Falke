#include <stdio.h>
#include <stdlib.h>

// CREATE FILES
void create_file(char **language)
{
    // Site Name input **********************
    printf("\nFilename without Extesion: ");
    // Site Name
    char siteName[20] = "";
    scanf("%s", &siteName);

    // File Name input **********************
    printf("Filename with Extesion   : ");
    // File Name
    char siteFile[20] = "";
    scanf("%s", &siteFile);

    // POINTER
    char *siteNameP = &siteName[0];
    char *siteFileP = &siteFile[0];

    // PRINT CODE ##############################
    printCode(&siteNameP, &siteFileP, &language);

}