// Prints string char by char, one per line using strlen

#include<stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // Prompt user for input
    string s = get_string("Input: ");
    
    // Print output
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        // Print char by char
        printf("%c", s[i]);
    }
    
    // Print new line
    printf("\n");
}
