// Prints string char by char, one per line

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for input
    string s = get_string("Input: ");
    
    // Print output
    printf("Output: ");
    for (int i = 0; s[i] != '\0'; i++)
    {
        // Print char by char
        printf("%c", s[i]);
    }
    
    // Print new line
    printf("\n");
}
