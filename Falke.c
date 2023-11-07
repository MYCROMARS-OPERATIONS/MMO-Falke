// Falke 2023 v.1.0.0
#include <stdio.h>

int a = 0;
int b = 0;
int sum = 0;

int main() {
    printf("\n");
    printf("    MMO Falke 2023\n");
     printf("**********************\n\n");
    printf("Calculation 1: a+b\n");

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Summe: ");
    printf("%d\n\n", sum);

    return (0);
}