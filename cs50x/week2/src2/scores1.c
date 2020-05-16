// Average of three numbers using array

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Scores
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    
    // Print average
    printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / 3);
}
