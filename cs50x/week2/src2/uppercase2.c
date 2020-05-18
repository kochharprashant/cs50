// Uppercases string using ctype library

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
            // Print character
            printf("%c", toupper(s[i]));
    }
    
    // Print new line
    printf("\n");
}
