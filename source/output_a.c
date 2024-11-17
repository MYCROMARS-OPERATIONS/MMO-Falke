//#include <stdio.h>
//#include "../header/output_a.h"

// Output
void output_a(void) {
        printf("Output over output.c:\n");
        printf("With printf(): Hello World\n");
        printf("With putc(): ");
        putc('H', stdout);
        putc('e', stdout);
        putc('l', stdout);
        putc('l', stdout);
        putc('o', stdout);
        putc('\n', stdout);
        printf("\n");
        }