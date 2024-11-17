// ARRAY C
// float Array [] scanf()
void arrayC(void)
{
    printf("Input Score 1...5:\n");

    float highscore[5];
    int x;

    for(x=0; x<5; x++)
    {
        printf("High score #%d: ", x+1);
        scanf("%f", &highscore[x]);
    }
    
    puts("\nHere are the high score's:");

    for(x=0; x<5; x++)
        printf("#%d %.2f\n", x+1, highscore[x]);
        printf("\n");
}