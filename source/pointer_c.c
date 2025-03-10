// POINTER C, of Array
void pointerC(void)
{
    printf("POINTER-C\n");
    printf("a Array[5] value: 11, 22, 33, 44, 55\n");
    printf("Pointer p = a\n");
    printf("For loop x < 5:\n\n");

    int a[5] = {11, 22, 33, 44, 55};
    int x, *p;
    
    // Address of Array to Pointer
    p = a;

    for (x=0; x<5; x++)
    {
        printf("Pointer value (p++): %d\n",*p);
        p++; 
    }
    printf("\n");
}