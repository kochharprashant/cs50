// // Prints string char in a new line, using strlen, remebering string's lenght

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // Prompt user for input
    string s = get_string("Input: ");
    
    // Print output
    printf("Output: \n");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Print each char in a new line
        printf("%c\n", s[i]);
    }
    
    // Print new line
    printf("\n");
}
