// Printing characters in an array of strings

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check array count
    for (int i = 0; i < argc; i++)
    {
        // Check array lenght
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            // Print character
            printf("%c\n", argv[i][j]);
        }
        
        // Print new line
        printf("\n");
    }
}
