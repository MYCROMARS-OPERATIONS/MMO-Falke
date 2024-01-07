#include <stdio.h>
#include "../header/loop_b.h"

// LOOP B
void loopB(void)
{
    printf("For loop 1...10:\n\n");

    const int size = 10;
    int score[SIZE] = {19, 42, 34, 1, 13, 18, 52, 12, 19, 45};

    int x;
    x = 0;

    for(x=0; x<size; x++){
        printf("Score value: %d\n", score[x]);
    }

    /*
    int x = 0;
    for( ; x<size; ){
        printf("Score value: %d\n", score[x]);
        x++;
    }
    */
   
    printf("\n");
}