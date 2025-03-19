#include <stdio.h>
#include <stdlib.h>

// NEW
void new_project(char **projectName, int **visit, char **language)
{
    printf("\n*** NEW PROJECT ***\n");

    // VISIT **************************
    **visit = 1;

    // Main folder create ****************************
    printf("Project Name (Mainfolder): ");
    scanf("%20s", *projectName);

    mkdir(*projectName);

    // Go to folder 
    printf("\nNow You are here:\n");
    chdir(*projectName);

    char s[100];
    printf("%s\n", getcwd(s, 100));
 
    char siteName[] = "index";
    char siteFile[] = "index.html";

    // char dest[100];
    // strcpy(dest, siteName);
        
    // char id[4] = "id_";
    // strcat(id, dest);

    // POINTER
    char *siteNameP = &siteName[0];
    char *siteFileP = &siteFile[0];

    // Language input ************************
    //printf("\nHeader\n");
    printf("\nChoose Language (de, en): ");
    //char language[20] = "";
    scanf("%s", *language);

    // PRINT CODE ##############################
    printCode(&siteNameP, &siteFileP, &language);
}