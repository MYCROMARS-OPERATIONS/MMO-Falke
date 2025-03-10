// POINTER A, of Int
void pointerA() {
    printf("POINTER-A\n");

    // int
    int alpha;
    alpha = 100;

    printf("Variable alpha:\n");
    printf("Value alpha: %d\n", alpha);
    printf("Size of alpha: %lu\n", sizeof(alpha));
    printf("Address &alpha: %p\n\n", &alpha);

    // Pointer
    int *ptr;

    // Address of int to Pointer
    ptr = &alpha;

    printf("Pointer ptr = &alpha:\n");
    printf("Value *ptr: %d\n", *ptr);
    printf("Size of *ptr: %lu\n", sizeof(*ptr));
    printf("Address ptr: %p\n\n", ptr);

    // Change Pointer value
    *ptr = 150;

    printf("Variable (change pointer *ptr=150):\n");
    printf("Value *ptr: %d\n", *ptr);
    printf("Value alpha: %d\n\n", alpha);

}