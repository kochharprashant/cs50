// Abstraction and scope

#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("%i\n", i);
}

// Prompt user for positive integar
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Positive Integar: ");
    }
    while (n < 1);
    return n;
}
