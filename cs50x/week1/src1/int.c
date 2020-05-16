// get_int and printf with %i

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int age = get_int("Whats your age?\n");
    printf("You are atleast %i days old\n", age * 365);
}
