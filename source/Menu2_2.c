#include <stdio.h>
#include <stdlib.h>
//#include <dir.h>
//#include <unistd.h>

// DELAY MENU 2
void Menu2_2()
{
    // Main folder create ****************************
    // char projectName[20];
 
    // printf("Project Name: ");
    // scanf("%199s",projectName);

    // mkdir(projectName);
    // printf("New folder created: %s \n",projectName);

    // // Go to Main folder 
    // printf("Go to Folder: %s\n",projectName);
    // chdir(projectName);

    // Site Name input **********************
    printf("\nSite Name without Extesion: ");
    // Site Name
    char siteName[20] = "";
    scanf("%s", &siteName);

    // File Name input **********************
    printf("\nFile Name with extesion (.html): ");

    // File Name
    char fileName[20] = "";
    scanf("%s", &fileName);
    
    // Language input ************************
    printf("\nChoose Language (de,en): ");
    char language[10] = "";
    scanf("%s", &language);

    // Datei erstellen ***********************
    char doctype[] = "<!DOCTYPE html>";

    // html open
    char html_open_a[] = "<html lang=\"";
    // Language
    // char lang[10] = "";
    // strcat (lang,language);
    char html_open_b[] = "\" id=\"top\">";

    // head open
    char index_head_open_a[] = "<head id=\"";
    // char index_head_id[20] = "";
    // strcat (index_head_id,siteName);
    char index_head_open_b[] = "_head\">";

    char meta[] = "<meta charset=\"UTF-8\">";

    char index_script_head_a[] = "<script src=\"script/";
    // char index_script_head_name[20] = "";
    // strcat (index_script_head_name,fileName);
    char index_script_head_b[] = "_head.js\"></script>";

    char index_head_close[] = "</head>";

    char index_body_open_a[] = "<body id=\"";
    // char index_body_id[20] = "";
    // strcat (index_body_id,fileName);
    char index_body_open_b[] = "_body\">";

    char index_script_body_a[] = "<script src=\"script/";
    // char index_script_body_name[20] = "";
    // strcat (index_script_body_name,fileName);
    char index_script_body_b[] = "_body.js\"></script>";
    
    char index_body_close[] = "</body>";
    char html_close[] = "</html>";
 

    // Output to HTML **********************
    //strcat (siteName,fileExtension);
    FILE *FileX;
    FileX = fopen(fileName, "w");

    if(FileX == NULL) 
    {
        puts("Can not open");
        exit (EXIT_FAILURE);
    }
    else
    {
        //puts("File open");
        fprintf(FileX, "%s\n", doctype);

        // Language
        fprintf(FileX, "%s", html_open_a);
        fprintf(FileX, "%s", language);

        // if (language==1){
        //     fprintf(FileX, "%s", lang1);
        // }
        // if (language==2){
        //     fprintf(FileX, "%s", lang2);
        // }

        fprintf(FileX, "%s\n", html_open_b);

        fprintf(FileX, "%s", index_head_open_a);
        fprintf(FileX, "%s", siteName);
        fprintf(FileX, "%s\n", index_head_open_b);

        fprintf(FileX, "%s\n", meta);

        fprintf(FileX, "%s", index_script_head_a);
        fprintf(FileX, "%s", siteName);
        fprintf(FileX, "%s\n", index_script_head_b);

        fprintf(FileX, "%s\n", index_head_close);

        fprintf(FileX, "%s", index_body_open_a);
        fprintf(FileX, "%s", siteName);
        fprintf(FileX, "%s\n", index_body_open_b);

        fprintf(FileX, "%s", index_script_body_a);
        fprintf(FileX, "%s", siteName);
        fprintf(FileX, "%s\n", index_script_body_b);

        fprintf(FileX, "%s\n", index_body_close);
        fprintf(FileX, "%s", html_close);
        //fprintf(SampleFile, "%s\n%s", vorname_a, name_a);

        puts("\nFile created successfully!");
        fclose(FileX);
    }  

    puts("\n");
}