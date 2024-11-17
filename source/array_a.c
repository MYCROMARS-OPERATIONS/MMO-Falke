// ARRAY A
void arrayA(void)
{
    printf("Array [3]: 100, 200, 300\n\n");

    int array_a[SIZE_Array_a] = {100, 200, 300};
    array_a[0] *= 10;
    array_a[1] *= 10;
    array_a[2] *= 10;

    // wrong:
    // array_a[3] *= 30;

    printf("Array 0*10: %d\n", array_a[0]);
    printf("Array 1*10: %d\n", array_a[1]);
    printf("Array 2*10: %d\n\n", array_a[2]);

    // wrong:
    // printf("Array 3*30: %d\n\n", array_a[3]);
}