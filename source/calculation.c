//#include <stdio.h>
//#include <math.h>
//#include <time.h>
//#include <synchapi.h>
//#include "../header/calculation.h"

// Calculation
void calculation(void)
{
    int a = 0;
    int b = 0;
    int sum = 0;

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    sum = (a + b);
    printf("Summe: %d\n\n", sum);
}