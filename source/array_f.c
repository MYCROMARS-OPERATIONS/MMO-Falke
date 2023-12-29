#include <stdio.h>
#include "header/array_f.h"

// Array to function
void incshow(char a)
 {
    a++;
    putchar(a);
 }

// Calculation
void arrayF(void)
{
    char text[] = "Gdkkn ";

    // 26 
    char textABC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int x;

    printf("%s, Array++:\n", text);
    
    // Gdkkn to Hello!
    for (x = 0; x < 6; x++)
        incshow(text[x]);

    printf("\n\n");

    for (x = 0; x < 6; x++)
        printf("%c = %c\n", text[x], text[x]+1);    

    printf("\n\n");

    for (x = 0; x < 26; x++)
        printf("%c = %c\n", textABC[x], textABC[x]+1); 
           
    printf("\n\n"); 
}



    
