#include <stdio.h>
#include <stdlib.h>

// Input String löschen
char b[50];
void scanString1(void){
    scanf("%s", &b);
}

// NEW
void create_folder()
{
    start:
    printf("\n*** CREATE FOLDERS ***\n");
    printf("\nCreate Standard Folders press 1 \n");

    printf("css\n");
    printf("script\n");
    printf("images\n");
    printf("videos\n");
    printf("fonts\n");
    
    printf("\nCreate Single Folder press 2\n");
    printf("Input: ");

    int m;
    if (scanf("%d", &m)) {
        
        // Falsche Zahl (nicht 1-2)
        if (m < 0 || m > 2){
                printf("\nInput is not 1-2\n\n");
                // Go here <<<---
                goto start;
            }

        switch (m)
        {
        case 0:
            // Exit
            //exit_programm();

        case 1:    
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
            break;

        case 2:
            // input **********************
            printf("\nFoldername: ");
            // Folder Name
            char folderName[20] = "";
            scanf("%s", &folderName);

            mkdir(folderName);
            printf("New folder created: %s \n",folderName);

            printf("\n");
            break;

        
        default:
            printf("Input is not a number 1-2\n\n");
            break;
        }
    }
    else{
        printf("\nInput is not a number 1-2\n\n");
        scanString1();
        
        // Go here <<<---
        goto start;
    }


    
}