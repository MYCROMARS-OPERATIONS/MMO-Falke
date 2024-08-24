#include <stdio.h>
#include <time.h>
#include <string.h>
//#include <stdlib.h>
#include "../header/time_c.h"
#include <synchapi.h>

// Time C
void time_c(void)
{
	printf("Programm Time\n");
	// Save time 1
	clock_t time_start = clock();

	// Programm sleeps
	Sleep(1000);

	// Save Time 2
	clock_t time_end = clock();

	// Berechnung
	clock_t duration = time_end - time_start;

	// Umwandlung in Sekunden
	double s = (double)duration / CLOCKS_PER_SEC;
	// Umwandlung in Milli Sekunden
	double ms = 1000.0 * s;

	printf("s: %lf\n", s);
	printf("ms: %lf\n", ms);

	printf("END\n\n");
}