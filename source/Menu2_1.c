// NEW
void Menu2_1(int *m)
{
    printf("\n*** NEW PROJECT***\n");

    // Main folder create ****************************
    char projectName[20];
 
    printf("Project Name: ");
    scanf("%199s",projectName);

    mkdir(projectName);
    printf("New folder created: %s \n",projectName);

    // Go to Main folder 
    printf("Go to Folder: %s\n",projectName);
    chdir(projectName);

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
    printf("\nCreate Header\n");
    printf("Choose Language (de,en): ");
    char language[10] = "";
    scanf("%s", &language);

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
    strcat (index_head_id,siteName);
    char index_head_open_b[] = "_head\">";

    char meta[] = "<meta charset=\"UTF-8\">";

    char index_script_head_a[] = "<script src=\"script/";
    char index_script_head_name[20] = "";
    strcat (index_script_head_name,siteName);
    char index_script_head_b[] = "_head.js\"></script>";

    char index_head_close[] = "</head>";

    char index_body_open_a[] = "<body id=\"";
    char index_body_id[20] = "";
    strcat (index_body_id,siteName);
    char index_body_open_b[] = "_body\">";

    char index_script_body_a[] = "<script src=\"script/";
    char index_script_body_name[20] = "";
    strcat (index_script_body_name,siteName);
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
        puts("File open");
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
    
    puts("File close.\n");
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