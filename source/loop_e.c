// LOOP E
// For Loop in for Loop
void loopE(void)
{
    const int size = 10;
    int score[10] = {19, 42, 34, 1, 13, 18, 52, 12, 19, 45};
    
    int a, b, temp;

    printf("Sort Score value 1...10:\n\n");
    
    // outer loop
    for(a=0; a<size; a++){
        // inner loop
        for(b=a+1; b<size; b++)
        {
            if (score[a] > score[b]){
                
            temp = score[a];
            score[a] = score[b];
            score[b] = temp;
            }
        }
    }

    // output
    for(a=0; a<size; a++){
        printf("Score value: %d\n", score[a]);
    }

    printf("\n");
}