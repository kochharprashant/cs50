// Determines the lenght of a string

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // Prompt for user's name
    string s = get_string("Name: ");
    
    // Count number of characters up until \0 (aka null)
    int n = 0;
    
    while (s[n] != 0)
    {
        n++;
    }
    
    // Print the lenght of the string
    printf("%i\n", n);
}
