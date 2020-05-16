// Cash register

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Floating point value for change
    float change;
    
    // Prompt user for change owed
        do
        {
            change = get_float("Changed owed: ");
        }
        while (change <= 0);
    
    // Integar for cents
    int cents;
    
    // Round cents to the closest penny
    cents = round(change * 100);
    
    // Integar for coins
    int coins = 0;
    
    // Loop for quaters
        while (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
    
    // Loop for dimes
        while (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
    
    // Loop for nickels
        while (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
    
    // Loop for pennys
        while (cents >= 1)
        {
            cents -= 1;
            coins++;
        }
    
    // Print number of coins to be given
    printf("%i\n", coins);
}
