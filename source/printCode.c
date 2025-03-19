#include <stdio.h>
#include <stdlib.h>

// NEW
void printCode(char **siteName, char **siteFile, char ***language)
{
    //printf("%s, %s, %s\n", *siteName, *siteFile, **language);
    
    printf("\n$$$$$ PRINT CODE $$$$$");
    // HEAD 
    char doctype[] = "<!DOCTYPE html>";

    // HTML
    char html_open_a[] = "<html lang=\"";
    char html_open_b[] = "\" id=\"top\">";

    // HEAD
    char head_open_a[] = "<head id=\"id_";
    char head_open_b[] = "_head\">";

    char meta[] = "<meta charset=\"UTF-8\">";

    // SCRIPT
    char script_open[] = "<script src=\"script/";
    char script_head[] = "_head.js\"></script>";

    char head_close[] = "</head>";

    // BODY
    char body_open_a[] = "<body id=\"id_";
    char body_open_b[] = "_body\">";

    // SCRIP
    char script_navi[] = "_navi.js\"></script>";
    char script_cookie[] = "_cookie.js\"></script>";
    char script_header[] = "_header.js\"></script>";
    char script_main[] = "_main.js\"></script>";
    char script_footer[] = "_footer.js\"></script>";
    
    char body_close[] = "</body>";
    char html_close[] = "</html>";
 

    // Output to HTML *****************
    FILE *FileX;
    FileX = fopen(*siteFile, "w");

    if(FileX == NULL) 
    {
        puts("Can not open");
        exit (EXIT_FAILURE);
    }
    else
    {
        //puts("\nFile open");
        fprintf(FileX, "%s\n", doctype);

        // HTML
        fprintf(FileX, "%s", html_open_a);
        fprintf(FileX, "%s", **language);
        fprintf(FileX, "%s\n", html_open_b);

        // HEAD
        fprintf(FileX, "%s", head_open_a);
        fprintf(FileX, "%s", *siteName);
        fprintf(FileX, "%s\n", head_open_b);

            fprintf(FileX, "%s\n", meta);
            // SCRIPT HEAD
            fprintf(FileX, "%s", script_open);
            fprintf(FileX, "%s", *siteName);
            fprintf(FileX, "%s\n", script_head);

        fprintf(FileX, "%s\n", head_close);

        // Body
        fprintf(FileX, "%s", body_open_a);
        fprintf(FileX, "%s", *siteName);
        fprintf(FileX, "%s\n", body_open_b);

            // SCRIPT Navi
            fprintf(FileX, "%s", script_open);
            fprintf(FileX, "%s", *siteName);
            fprintf(FileX, "%s\n", script_navi);
            
            // SCRIPT COOKIE
            fprintf(FileX, "%s", script_open);
            fprintf(FileX, "%s", *siteName);
            fprintf(FileX, "%s\n", script_cookie);
            
            // SCRIPT HEADER
            fprintf(FileX, "%s", script_open);
            fprintf(FileX, "%s", *siteName);
            fprintf(FileX, "%s\n", script_header);

            // SCRIPT MAIN
            fprintf(FileX, "%s", script_open);
            fprintf(FileX, "%s", *siteName);
            fprintf(FileX, "%s\n", script_main);
            
            // SCRIPT FOOTER
            fprintf(FileX, "%s", script_open);
            fprintf(FileX, "%s", *siteName);
            fprintf(FileX, "%s\n", script_footer);

            fprintf(FileX, "%s\n", body_close);
            fprintf(FileX, "%s", html_close);

            puts("\nFile created successfully!");

        fclose(FileX);
        //puts("File close.\n");
        //printf("\n");
    }  

    printf("\n");
    
}