// Calculates a remainder

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for integar
    int n = get_int("n: ");
    
    // Check parity of integar
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
