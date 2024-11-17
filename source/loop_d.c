// LOOP D
// For Loop in for Loop
void loopD(void)
{
    int x;
    char a;

    puts("Grid example");
    
    for(x=0; x<10; x++){

        for(a='A'; a<='J'; a++)
        {
            printf("%d%c  ", x, a);
        }
        putchar('\n');
    }

    printf("\n");
}