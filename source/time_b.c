#include <stdio.h>
#include <time.h>
#include "../header/time_b.h"

#include <string.h>
//#include <stdlib.h>

// Time B
void time_b(void)
{
	// typedef long int ************************************
	time_t timer = time(NULL);

	printf("%s\n", "TIME with ctime()");
	
	// ctime()
  	printf("current time is:\n");
  	printf("%s\n\n", ctime(&timer));


	// size_t: Unsigned long long int ***********************
	printf("%s\n", "size_t long long int");
	
	char str[] = "Here is an example";
	printf("%s %s\n", "strlen of:", str);

	for (size_t i = 0; i < strlen(str); i++) {
		//printf("%zd\n", i);
		printf("%zu\n", i);
	} 
	printf("%s\n\n", "End");
}