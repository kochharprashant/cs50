// // Prints string char by char, one per line using strlen, remebering string's lenght

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // Prompt user for input
    string s = get_string("Input: ");
    
    // Print output
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Print char by char
        printf("%c", s[i]);
    }
    
    // Print new line
    printf("\n");
}
