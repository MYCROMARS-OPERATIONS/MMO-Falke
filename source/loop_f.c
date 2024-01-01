#include <stdio.h> 
#include "header/loop_f.h" 

// LOOP F
void loopF(void)
{
    printf("Down & up:\n\n");
    
    for(int a=0, b=0; b<10; a--, b++)
    {
        printf("down: %d up: %d\n", a, b);
    }

/*  
    int a,b;
    a = b = 0;
    while(b<10)
    {
        printf("%d : %d\n", a, b);
        a--;
        b++;
    }
*/
    printf("\n");
}