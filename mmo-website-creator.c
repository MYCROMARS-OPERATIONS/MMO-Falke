/****************/
/*   MYCROMARS  */
/*ALEXANDER RUDI*/
/****************/

// header file
#include "header.h"
//#include <windows.h>
//#include <unistd.h>

// Input String löschen
char b[50];
void scanString0(void){
    scanf("%s", &b);
}

int main()
{
    printf("\n");
    printf("************************************\n");
    printf("####  MYCROMARS WEBSITE CREATOR ####\n");
    printf("#### C All rights reserved 2025 ####\n");
    printf("####        ALEXANDER RUDI      ####\n");
    printf("####         Version: 1.1       ####\n");
    printf("************************************\n\n");

    int menu1 = 0;
    int menu2 = 0;

    // PROJECT NAME *********************
    char projectName[] = "ProjectName";
    char *projectNameP = &projectName[0];
    
    // Language *********************
    char language[] = "de";
    char *languageP = &language[0];

    // VISIT *********************
    int visit = 0;
    int *visitP = &visit;

    // Go here <<<---
    menu1: 

    if (visit == 0) { 
        /* ********************** MENU 1 ********************* */
        
        
        printf("********** MAIN MENU *********\n");
        printf("Press: 0 EXIT  | 1 NEW-PROJECT\n");   
        
        printf("Input: ");

        if (scanf("%d", &menu1)) {
        
            // Falsche Zahl (nicht 1-12)
            if (menu1 < 0 || menu1 > 12){
                    printf("\nInput is not 1-12\n\n");
                    // Go here <<<---
                    goto menu1;
                }

            switch (menu1)
            {
            case 0:
                // Exit
                Menu2_0();

            case 1:
                // NEW PROJECT - Basic Folder
                Menu2_1(&projectNameP, &visitP, &languageP);
                break;

            case 2:
                break;

            case 3:
                break;
            
            default:
                printf("Input is not a number 1-3\n\n");
                break;
            }
        }
        else{
            printf("\nInput is not a number 1-3\n\n");
            scanString0();
            
            // Go here <<<---
            goto menu1;
        }
    
        // reset variable
        menu1 = 0;
        
        // goto Menu;
        goto menu1;
    }


    if (visit == 1) { 
        /* ********************** MENU 2 ********************* */
        // Go here <<<---
        menu2:

        printf("\n");
        printf("*** MENU CREATE FILES ***\n");
        printf("Press: 0 BACK | 1 CREATE FILE\n");   
        
        printf("Input: ");

        if (scanf("%d", &menu2)) {
        
            // Falsche Zahl (nicht 1-12)
            if (menu2 < 0 || menu2 > 12){
                    printf("\nInput is not 0-1\n\n");
                    // Go here <<<---
                    goto menu2;
                }

            switch (menu2)
            {
            case 0:
                // End
                printf("\n");
                char s[100];

                // Ornder verlassen
                printf("EXIT CREATE FILES\n");
                // printf("%s\n", getcwd(s, 100));
                chdir("..");
                printf("Now You are here: ");
                printf("%s\n\n", getcwd(s, 100));

                visit = 0;
                // Go here <<<---
                goto menu1;
                //Menu2_0();

            case 1:
                // File create
                Menu2_2(&languageP);
                break;

            case 2:
                break;

            case 3:
                break;

            default:
                printf("Input is not a number 0-1\n\n");
                break;
            }
        }
        else{
            printf("\nInput is not a number 0-1\n\n");
            scanString0();
            
            // Go here <<<---
            goto menu2;
        }
        // Go here <<<---
        goto menu2;
    }
}
