// POINTER A, of Int
void pointerA() {
    printf("POINTER-A\n");
    // int
    int alpha;
    alpha = 100;

    printf("Variable alpha:\n");
    printf("value alpha: %d\n", alpha);
    printf("Size of alpha: %lu\n", sizeof(alpha));
    printf("address &alpha: %p\n\n", &alpha);

    // Pointer
    int *ptr;

    // Address of int to Pointer
    ptr = &alpha;

    printf("Pointer ptr = &alpha:\n");
    printf("value *ptr: %d\n", *ptr);
    printf("Size of *ptr: %lu\n", sizeof(*ptr));
    printf("address ptr: %p\n\n", ptr);

    // Change Pointer value
    *ptr = 150;

    printf("Variable (change pointer *ptr=150):\n");
    printf("value *ptr: %d\n", *ptr);
    printf("value alpha: %d\n\n", alpha);

}