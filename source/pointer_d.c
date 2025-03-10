// POINTER D, to Function
void pointerD(int *val)
{
    printf("POINTER-D\n");
    printf("Address of int to Function\n");
    printf("Pointer value of *val: %d\n", *val);

    // Change Pointer value
    *val = 0;

    printf("Pointer value reset: %d\n", *val);
}