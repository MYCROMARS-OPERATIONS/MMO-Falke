// Datei h
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void datei_h(void)
{
    printf("CREATE FOLDER\n");

    char name[] = "";
    // Folder create ****************************
    printf("Name: ");
    scanf("%20s", name);
    mkdir(name);
    printf("New folder created: %s\n\n", name);

    // Go to folder 
    chdir(name); 
    printf("Go to folder.\n");
    
    // Path
    char s[100];
    printf("Now You are here:\n");
    printf("%s\n", getcwd(s, 100));

    // String
    char siteFile[] = "index.html";
    char doctype[] = "<!DOCTYPE html>";
    
    // Copy a String *********
    char scr[] = "copy this";
    char dest[100];
    strcpy(dest, scr);

    printf("scr: %s\n", scr);
    printf("dest: %s\n", dest);



// File create/open and write **************
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
        fprintf(FileX, "%s\n", scr);
        fprintf(FileX, "%s\n", dest);
        puts("\nFile created successfully!");
        fclose(FileX);
        //puts("File close.\n");
    }  

    // Go back
    printf("Go back\n\n");
    chdir("..");
    printf("Now You are here: \n");
    printf("%s\n\n", getcwd(s, 100));
}