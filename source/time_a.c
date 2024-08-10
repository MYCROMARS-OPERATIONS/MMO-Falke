#include <stdio.h>
#include <time.h>
#include <synchapi.h>
#include "../header/time_a.h"

// Calculation
void time_a(void)
{
	// typedef long int
	// number of sec since Jan. 1, 1970 midnight
    time_t now = time(NULL);

	printf("%s\n", "Seconds since Jan. 1, 1970 midnight:");
	printf("%ld\n\n", now);

	printf("%s\n", "Programm sleeps 2 seconds");

    // Programm sleeps 2 seconds, #include <synchapi.h>
	Sleep(2000);

	time_t two_secs = time(NULL);
	printf("%ld\n\n", two_secs);

	printf("%s\n", "Show differenz:");

	// Differenz
    double diff = difftime(two_secs, now);
	printf("%f\n\n", diff);
}