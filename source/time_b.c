#include <stdio.h>
#include <time.h>
#include "../header/time_b.h"

// Calculation
void time_b(void)
{
	// typedef long int
	time_t timer = time(NULL);

	printf("%s\n", "TIME with ctime()");
	
	// ctime()
  	printf("current time is:\n");
  	printf("%s\n\n", ctime(&timer));
}