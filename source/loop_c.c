//#include <stdio.h>
//#include <time.h>
//#include "../header/loop_c.h"

// LOOP C
// For Loop time.h
void loopC(void)
{
    int m;

    // seed the randomizer
    srand((unsigned) time(NULL));

    // fetch a random starting date range 1 to 7
    // m=rand() % 7+1;
    
    for(m=rand() % 7+1; m<32; m +=7){
        printf("Monday is on: %d\n", m);
    }

    printf("\n");
}