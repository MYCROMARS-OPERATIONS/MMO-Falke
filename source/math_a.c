#include <stdio.h>
#include <math.h>
#include "../header/math_a.h"

// Sinus, Kugel Umfang, Volumen
void math_a(void)
{
    double c;
    double sinus;
    double radius;

    printf("Input Sinus (0...1): ");
    scanf("%lf", &c);

    sinus = sin(c);

    printf("Sinus: %6.3f\n", sinus);
    printf("Sinus: %.3f\n\n", sinus);

    // Umfang einer Kugel
    printf("Sphere circumference\n");
    printf("Input radius: ");

    scanf("%lf", &radius);
    printf("circumference is: %.2f\n\n", 2 * radius * 3.14);
    
    // Volumen einer Kugel
    printf("Sphere volume\n");
    printf("volume is: %.2f\n\n", (4.0/3.0) * 3.1415 * (radius*radius*radius) );
}