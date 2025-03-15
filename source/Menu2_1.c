#include <stdio.h>
#include <stdlib.h>
//#include <dir.h>
//#include <unistd.h>

// NEW
void Menu2_1(char **projectName, int **visit)
{
    printf("\n*** NEW PROJECT ***\n");


    // PROJECT NAME *******************
    // printf("PointertName a: ");
    // printf("%s\n\n", *projectName);

    // *projectName = "char_Pointer_2";

    // printf("PointertName a2: ");
    // printf("%s\n\n", *projectName);
    

    // VISIT **************************
    **visit = 1;

    // printf("VISIT: ");
    // printf("%d\n\n", **visit);


    // Main folder create ****************************
    //char projectName[20] = "";
 
    printf("Project Name: ");
    scanf("%20s", *projectName);

    mkdir(*projectName);
    //printf("New folder created: %s \n", *projectName);

    // Go to folder 
    //printf("Go to Folder: %s\n", *projectName);
    printf("\nNow You are here:\n");
    chdir(*projectName);

    char s[100];
    printf("%s\n", getcwd(s, 100));
 

    //chdir("..");

    // HTML Page Name input 
    /*
    printf("HTML Site Name: ");
    char filename[20] = "";
    scanf("%s", &filename);
    */
    char siteName[] = "index";
    char siteFile[] = "index.html";

    //char *name[] = siteName;

    // Language input ************************
    //printf("\nHeader\n");
    printf("Choose Language (de,en): ");
    char language[20] = "";
    scanf("%s", language);

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
    // strcat (index_script_head_name,siteName);
    char index_script_head_b[] = "_head.js\"></script>";

    char index_head_close[] = "</head>";

    char index_body_open_a[] = "<body id=\"";
    // char index_body_id[20] = "";
    // strcat (index_body_id,siteName);
    char index_body_open_b[] = "_body\">";

    char index_script_body_a[] = "<script src=\"script/";
    // char index_script_body_name[20] = "";
    // strcat (index_script_body_name,siteName);
    char index_script_body_b[] = "_body.js\"></script>";
    
    char index_body_close[] = "</body>";
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
        // fprintf(FileX, "%s", index_head_id);
        fprintf(FileX, "%s\n", index_head_open_b);

        fprintf(FileX, "%s\n", meta);

        fprintf(FileX, "%s", index_script_head_a);
        fprintf(FileX, "%s", siteName);
        //fprintf(FileX, "%s", index_script_head_name);
        fprintf(FileX, "%s\n", index_script_head_b);

        fprintf(FileX, "%s\n", index_head_close);

        fprintf(FileX, "%s", index_body_open_a);
        fprintf(FileX, "%s", siteName);
        //fprintf(FileX, "%s", index_body_id);
        fprintf(FileX, "%s\n", index_body_open_b);

        fprintf(FileX, "%s", index_script_body_a);
        fprintf(FileX, "%s", siteName);
        //fprintf(FileX, "%s", index_script_body_name);
        fprintf(FileX, "%s\n", index_script_body_b);

        fprintf(FileX, "%s\n", index_body_close);
        fprintf(FileX, "%s", html_close);
        //fprintf(SampleFile, "%s\n%s", vorname_a, name_a);

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

    //Menu_Files(&language[20]);
}