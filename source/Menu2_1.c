#include <stdio.h>
#include <stdlib.h>
//#include <dir.h>
//#include <unistd.h>

// NEW
void Menu2_1(char **projectName, int **visit, char **language)
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

    // Language input ************************
    //printf("\nHeader\n");
    printf("Choose Language (de, en): ");
    //char language[20] = "";
    scanf("%s", *language);

    // Datei erstellen ***********************
    char doctype[] = "<!DOCTYPE html>";

    // html open
    char html_open_a[] = "<html lang=\"";
    // Language
    // char lang[10] = "";
    // strcat (lang,language);
    char html_open_b[] = "\" id=\"top\">";

    // head open
    char head_open_a[] = "<head id=\"";
    char head_open_b[] = "_head\">";

    char meta[] = "<meta charset=\"UTF-8\">";

    char script_head_a[] = "<script src=\"script/";
    char script_head_b[] = "_head.js\"></script>";

    char head_close[] = "</head>";

    char body_open_a[] = "<body id=\"";
    char body_open_b[] = "_body\">";

    char script_body_a[] = "<script src=\"script/";
    char script_body_b[] = "_body.js\"></script>";
    
    char body_close[] = "</body>";
    char html_close[] = "</html>";
 
    // Output to HTML
    FILE *FileX;
    FileX = fopen(siteFile, "w");

    if(FileX == NULL) 
    {
        puts("Can not open");
        exit (EXIT_FAILURE);
    }
    else
    {
        //puts("\nFile open");
        fprintf(FileX, "%s\n", doctype);

        // Language
        fprintf(FileX, "%s", html_open_a);
        fprintf(FileX, "%s", *language);
        fprintf(FileX, "%s\n", html_open_b);

        fprintf(FileX, "%s", head_open_a);
        fprintf(FileX, "%s", siteName);
        fprintf(FileX, "%s\n", head_open_b);

        fprintf(FileX, "%s\n", meta);

        fprintf(FileX, "%s", script_head_a);
        fprintf(FileX, "%s", siteName);
        fprintf(FileX, "%s\n", script_head_b);

        fprintf(FileX, "%s\n", head_close);

        fprintf(FileX, "%s", body_open_a);
        fprintf(FileX, "%s", siteName);
        fprintf(FileX, "%s\n", body_open_b);

        fprintf(FileX, "%s", script_body_a);
        fprintf(FileX, "%s", siteName);
        fprintf(FileX, "%s\n", script_body_b);

        fprintf(FileX, "%s\n", body_close);
        fprintf(FileX, "%s", html_close);

        fclose(FileX);
        //puts("File close.\n");
        printf("\n");
    }  

    // Create Standard Subfolders
    char css[] = "css";
    char script[] = "script";
    char images[] = "images";
    char videos[] = "videos";
    char fonts[] = "fonts";
 
    mkdir(css);
    printf("New folder created: %s \n",css);

    mkdir(script);
    printf("New folder created: %s \n",script);

    mkdir(images);
    printf("New folder created: %s \n",images);

    mkdir(videos);
    printf("New folder created: %s \n",videos);

    mkdir(fonts);
    printf("New folder created: %s \n",fonts);
    
    printf("\n");
}