//##### MYCROMARS CODE PRINTER ####
//#####          2025         #####
//*********************************

// Include file
#include <dir.h>
#define MODUS 

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

// Input String löschen
// char b[50];
// void scanString1(void){
//     scanf("%s", &b);
// }

// NEW PROJECT
void new(void)
{
    // Main folder create
    char pfadname[200];
 
    printf("Folder Name: ");
    scanf("%199s",pfadname);
    mkdir(pfadname);
    printf("New folder created: %s \n",pfadname);

    // Go to Main folder
    chdir(pfadname);


    // Filename input
    printf("Filename: ");
    char filename[20] = "";
    scanf("%s", &filename);
    
    // Language input
    printf("\nLanguage (de,en): ");
    char language[10] = "";
    scanf("%s", &language);

    // int language = 1;
    
    // // Go here <<<---
    // LanguageMenu:

    // printf("********** Sprache ***********\n");
    // printf("Press: (1) Deutsch  | (2) English\n");

    // if (scanf("%d", &language)) {
       
    //     switch (language)
    //     {
    //     case 1:
            
    //         break;

    //     case 2:
        
    //         break;

    //     default:
    //         printf("Input is not a number 1-2\n\n");
    //         scanString1();
    //         // reset variable
    //         language = 0;
    //         // Go here <<<---
    //         goto LanguageMenu;
    //     }
    // }
    // else{
    //     printf("\nInput is not 1-2\n\n");
    //     scanString1();

    //     // reset variable
    //     language = 0;

    //     // Go here <<<---
    //     goto LanguageMenu;
    // }

    // Datei öffnen/erstellen schreiben 2 Worte (w)
    // Grundgerüst
    char doctype[] = "<!DOCTYPE html>";

    // Language
    char html_open_a[] = "<html lang=\"";
    char lang[10] = "";
    strcat (lang,language);
    char html_open_b[] = "\" id=\"top\">";

    char index_head_open_a[] = "<head id=\"";
    char index_head_id[20] = "";
    strcat (index_head_id,filename);
    char index_head_open_b[] = "_head\">";

    char meta[] = "<meta charset=\"UTF-8\">";

    char index_script_head_a[] = "<script src=\"script/";
    char index_script_head_name[20] = "";
    strcat (index_script_head_name,filename);
    char index_script_head_b[] = "_head.js\"></script>";

    char index_head_close[] = "</head>";

    char index_body_open_a[] = "<body id=\"";
    char index_body_id[20] = "";
    strcat (index_body_id,filename);
    char index_body_open_b[] = "_body\">";

    char index_script_body_a[] = "<script src=\"script/";
    char index_script_body_name[20] = "";
    strcat (index_script_body_name,filename);
    char index_script_body_b[] = "_body.js\"></script>";
    
    char index_body_close[] = "</body>";
    char html_close[] = "</html>";
 
    // Output to HTML
    FILE *FileX;
    FileX = fopen(filename, "w");

    if(FileX == NULL) 
    {
        puts("Fehler beim Öffnen von index.html");
        exit (EXIT_FAILURE);
    }
    else
    {
        puts("Datei erfolgreich geoeffnet/erstellt zum schreiben/ueberschreiben.");
        fprintf(FileX, "%s\n", doctype);

        // Language
        fprintf(FileX, "%s", html_open_a);
        fprintf(FileX, "%s", lang);

        // if (language==1){
        //     fprintf(FileX, "%s", lang1);
        // }
        // if (language==2){
        //     fprintf(FileX, "%s", lang2);
        // }

        fprintf(FileX, "%s\n", html_open_b);

        fprintf(FileX, "%s", index_head_open_a);
        fprintf(FileX, "%s", index_head_id);
        fprintf(FileX, "%s\n", index_head_open_b);

        fprintf(FileX, "%s\n", meta);

        fprintf(FileX, "%s", index_script_head_a);
        fprintf(FileX, "%s", index_script_head_name);
        fprintf(FileX, "%s\n", index_script_head_b);

        fprintf(FileX, "%s\n", index_head_close);

        fprintf(FileX, "%s", index_body_open_a);
        fprintf(FileX, "%s", index_body_id);
        fprintf(FileX, "%s\n", index_body_open_b);

        fprintf(FileX, "%s", index_script_body_a);
        fprintf(FileX, "%s", index_script_body_name);
        fprintf(FileX, "%s\n", index_script_body_b);

        fprintf(FileX, "%s\n", index_body_close);
        fprintf(FileX, "%s", html_close);
        //fprintf(SampleFile, "%s\n%s", vorname_a, name_a);

        fclose(FileX);
        puts("Datei geschlossen.\n");
    }  


    // Create Standard Subfolders
    char css[] = "css";
    char script[] = "script";
    char images[] = "images";
    char videos[] = "videos";
    char fonts[] = "fonts";
 
    mkdir(css);
    printf("New Subfolder created: %s \n",css);

    mkdir(script);
    printf("New Subfolder created: %s \n",script);

    mkdir(images);
    printf("New Subfolder created: %s \n",images);

    mkdir(videos);
    printf("New Subfolder created: %s \n",videos);

    mkdir(fonts);
    printf("New Subfolder created: %s \n",fonts);

    // Go to Subfolder
    //chdir(subpfadname);

    // Subfolder create
    // char subpfadname[200];
 
    // printf("Subolder Name: ");
    // scanf("%199s",subpfadname);
    // mkdir(subpfadname);
    // printf("New Subfolder created: %s \n",subpfadname);

    // Go to Subfolder
    //chdir(subpfadname);

}