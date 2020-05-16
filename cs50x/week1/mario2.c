// Mario version two

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Integar for height, space and hash
    int height, space, hash;
    
    // Prompt user for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    
    // Main loop
    for (int i = 0; i < height; i++)
    {
        // Loop to print space for left alignment
        for (space = (height - i); space >= 2; space--)
        {
            // Print space
            printf(" ");
        }
        
        // Loop to print hash
        for (hash = 1; hash <= (i + 1); hash++)
        {
            // Print hash
            printf("#");
        }
        
        // Print space
        printf("  ");
        
        // Loop to print hash
        for (hash = 1; hash <= (i + 1); hash++)
        {
            // Print hash
            printf("#");
        }
        
        // Print a new line
        printf("\n");
    }
}
