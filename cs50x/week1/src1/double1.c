#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for x
    double x = get_double("x: ");
    
    // Prompt user for y
    double y = get_double("y: ");
    
    // Perform division
    printf("x / y = %.2f\n", x / y);
}
