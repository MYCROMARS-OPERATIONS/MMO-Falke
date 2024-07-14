#include <stdio.h>
#include <string.h>
#include "../header/input_b.h"

char b[50];

void scanString(void){
    scanf("%s", &b);
    //printf("b: %s \n", b);
}

// Input a number
void input_b(void)
{
    int a;
    
    // Go here <<<---
    start:
    printf("Input a Number: ");

    if (scanf("%d", &a)) {
        printf("Your Input: %d\n", a);
        printf("Input is correct.\n\n");
    }
    else{
        //printf("\nYour Input: %d\n", a);
        printf("Input is not a number!\n\n");

        scanString();

        // Go here <<<---
        goto start;
    }

    //return (0);
}