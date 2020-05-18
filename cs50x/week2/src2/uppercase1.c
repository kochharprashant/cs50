// Uppercases string using ctype library (an unnecessary action)

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // Prompt user for a string
    string s = get_string("Before: ");
    
    // Print After
    printf("After: ");
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Charater is lowercase
        if (islower(s[i]))
        {
            // Print character
            printf("%c", toupper(s[i]));
        }
        
        // Character is uppercase
        else
        {
            // Print character
            printf("%c", s[i]);
        }
    }
    
    // Print new line
    printf("\n");
}
