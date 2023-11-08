// Falke 2023 v.1.0.0
#include <stdio.h>
#include <stdlib.h>

int a = 0;
int b = 0;
int sum = 0;

char buchstabe;

int exitProg = 0;

int main() {
    printf("\n");
    printf("    MMO Falke 2023\n");
    printf("**********************\n\n");

    // Calculation a+b
    printf("Calculation 1: a+b\n");

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Summe: ");
    printf("%d\n\n", sum);

    // Exit or continue
    printf("Press 1 for exit, 2 for continue: ");
    scanf("%d", &exitProg);

    if (exitProg == 1){
        printf("End\n");
        exit(EXIT_FAILURE);
    }
    else{
        printf("Continue\n");
    }

    return 0;
}