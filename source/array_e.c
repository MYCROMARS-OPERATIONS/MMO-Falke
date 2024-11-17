// ARRAY E
// int Array dublicate numbers
void arrayE(void)
{
    int original[5] = {45, 50, 88, 100, 213};
    int dublicate[5];
    int x;

    // Dublicate
    for(x=0; x<5; x++)
        dublicate[x] = original[x];

    puts("Array values:");

    for(x=0; x<5; x++)
        printf("Element#%d %d == %d\n", x, original[x], dublicate[x]);

    printf("\n");
}