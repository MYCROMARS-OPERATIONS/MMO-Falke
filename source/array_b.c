// ARRAY B
void arrayB(void)
{
    printf("Array [3][3]: {{10, 20, 30},{100, 200, 300},{1000, 2000 3000}}\n\n");
    int array_b[SIZE_Array_b][SIZE_Array_b] = {{10, 20, 30},{100, 200, 300},{1000, 2000, 3000}};
    array_b[0][0] *= 2;
    array_b[0][1] *= 2;
    array_b[0][2] *= 2;

    printf("Array [0][0]*2: %d\n", array_b[0][0]);
    printf("Array [0][1]*2: %d\n", array_b[0][1]);
    printf("Array [0][2]*2: %d\n\n", array_b[0][2]);

    printf("Array [1][0]: %d\n", array_b[1][0]);
    printf("Array [1][1]: %d\n", array_b[1][1]);
    printf("Array [1][2]: %d\n\n", array_b[1][2]);

    printf("Array [2][0]: %d\n", array_b[2][0]);
    printf("Array [2][1]: %d\n", array_b[2][1]);
    printf("Array [2][2]: %d\n\n", array_b[2][2]);
}