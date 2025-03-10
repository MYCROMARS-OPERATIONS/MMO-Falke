// POINTER B, of Array
void pointerB(void)
{
    printf("POINTER-B\n");
    // Array
    int a[5] = {2, 4, 6, 8, 10};

    // Pointer
    int *ptr;
    
    // Address of Array to Pointer
    ptr = a;

    printf("a Array[5] value: 2, 4, 6, 8, 10\n");
    printf("Pointer ptr = a\n\n");

    printf("Pointer value *(ptr+0): %d\n", *(ptr+0));
    printf("Pointer value *(ptr+1): %d\n", *(ptr+1));
    printf("Pointer value *(ptr+2): %d\n", *(ptr+2));
    printf("Pointer value *(ptr+3): %d\n", *(ptr+3));
    printf("Pointer value *(ptr+4): %d\n\n", *(ptr+4));
}