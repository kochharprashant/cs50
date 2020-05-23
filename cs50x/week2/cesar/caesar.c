// Caesar problem set

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Check correct command-line argument entered by user
    if (argc != 2)
    {
        // Print error when user did not enter correct command-line argument
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    
     // Check correct command-line argument entered by user
    for (int i = 0, x = strlen(argv[1]); i < x; i++)
    {
        // Check for alphabets
        if (isalpha(argv[1][i]))
        {
            // Print error when user did not enter correct command-line argument
            printf("Usage: %s key\n", argv[0]);
            return 1;
        }
    }
    
    // Prompt user for input
    string text = get_string("plaintext: ");
            
    // Print ciphertext
    printf("ciphertext: ");
            
    // Convert string to integar
    int key = atoi(argv[1]);
    
    // Cipher conversion
    for (int j = 0, y = strlen(text); j < y; j++)
    {
        // Check for upper case
        if (isupper(text[j]))
        {
            // Print cipher
            printf("%c", 'A' + (text[j] - 'A' + key) % 26);
        }
        
        // Check for lower case
        else if (islower(text[j]))
        {
            // Print cipher
            printf("%c", 'a' + (text[j] - 'a' + key) % 26);
        }
        
        // Check for special characters or digits
        else
        {
            // Print special characters or digits
            printf("%c", text[j]);
        }
    }
    // Print new line
    printf("\n");
}
