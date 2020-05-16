// Return value

#include <stdio.h>
#include <cs50.h>

int square(int n);

int main(void)
{
    int input = get_int("Input: ");
    printf("Output: %i\n", square(input));
}

// Square n
int square(int n)
{
    return n * n;
}
