// Uppercases a string

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // Prompt user for a string
    string s = get_string("Before: ");
    
    // Print After
    printf("After: ");
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Character is lowercase
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Print character
            printf("%c", s[i] - 32);
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
