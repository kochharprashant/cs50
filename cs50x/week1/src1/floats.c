// Floating-point with arithmetic with float

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for x
    float x = get_float("x: ");
    
    // Prompt user for y
    float y = get_float("y: ");
    
    // Perform division
    printf("x / y = %.50f\n", x /y);
}
