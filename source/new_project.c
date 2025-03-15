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
    
    // Create Standard Subfolders
    //char css[] = "css";
    // char script[] = "script";
    // char images[] = "images";
    // char videos[] = "videos";
    // char fonts[] = "fonts";
 
    //mkdir(css);
    //printf("New folder created: %s \n",css);

    // mkdir(script);
    // printf("New folder created: %s \n",script);

    // mkdir(images);
    // printf("New folder created: %s \n",images);

    // mkdir(videos);
    // printf("New folder created: %s \n",videos);

    // mkdir(fonts);
    // printf("New folder created: %s \n",fonts);
    
    //printf("\n");
}