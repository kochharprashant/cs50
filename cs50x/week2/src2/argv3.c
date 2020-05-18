// Printing arguments in new line

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
            // Print argument
            printf("%c", argv[i][j]);
        }
        
        // Print new line
        printf("\n");
    }
}
