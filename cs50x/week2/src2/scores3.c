// Average numbers using a helper function

#include <stdio.h>
#include <cs50.h>

float average(int lenght, int array[]);

int main(void)
{
    // Get number of scores
    int n = get_int("Scores: ");

    // Get scores
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Scores %i: ", i + 1);
    }
    printf("Average: %.1f\n", average(n, scores));
}

float average(int lenght, int array[])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) lenght;
}
