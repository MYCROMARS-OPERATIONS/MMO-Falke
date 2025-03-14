//#### NEW ####

// Include file
#include <dir.h>
#define MODUS 
#include "../header/Menu2.h"

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

// Input String löschen
// char b[50];
// void scanString1(void){
//     scanf("%s", &b);
// }

// NEW PROJECT
void file(void)
{
    // HTML Page Name input 
    
    printf("HTML Site Name: ");
    char filename[20] = "";
    scanf("%s", &filename);
    
    //char siteName[] = "index";

    //char *name[] = siteName;

    // Language input ************************
    // printf("\nCreate Header\n");
    // printf("Choose Language (de,en): ");
    // char language[10] = "";
    // scanf("%s", &language);

    char language[10] = "de";

    // Datei erstellen ***********************
    char doctype[] = "<!DOCTYPE html>";

    // html open
    char html_open_a[] = "<html lang=\"";
    // Language
    char lang[10] = "";
    strcat (lang,language);
    char html_open_b[] = "\" id=\"top\">";

    // head open
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
    FILE *FileY;
    FileY = fopen(filename, "w");

    if(FileY == NULL) 
    {
        puts("Can not open");
        exit (EXIT_FAILURE);
    }
    else
    {
        puts("File open");
        fprintf(FileY, "%s\n", doctype);

        // Language
        fprintf(FileY, "%s", html_open_a);
        fprintf(FileY, "%s", lang);

        // if (language==1){
        //     fprintf(FileX, "%s", lang1);
        // }
        // if (language==2){
        //     fprintf(FileX, "%s", lang2);
        // }

        fprintf(FileY, "%s\n", html_open_b);

        fprintf(FileY, "%s", index_head_open_a);
        fprintf(FileY, "%s", index_head_id);
        fprintf(FileY, "%s\n", index_head_open_b);

        fprintf(FileY, "%s\n", meta);

        fprintf(FileY, "%s", index_script_head_a);
        fprintf(FileY, "%s", index_script_head_name);
        fprintf(FileY, "%s\n", index_script_head_b);

        fprintf(FileY, "%s\n", index_head_close);

        fprintf(FileY, "%s", index_body_open_a);
        fprintf(FileY, "%s", index_body_id);
        fprintf(FileY, "%s\n", index_body_open_b);

        fprintf(FileY, "%s", index_script_body_a);
        fprintf(FileY, "%s", index_script_body_name);
        fprintf(FileY, "%s\n", index_script_body_b);

        fprintf(FileY, "%s\n", index_body_close);
        fprintf(FileY, "%s", html_close);
        //fprintf(SampleFile, "%s\n%s", vorname_a, name_a);

        fclose(FileY);
        
    }  
 
    puts("File close.\n");

    // *------------- Exit -------------*
    Menu2_0();
  
}