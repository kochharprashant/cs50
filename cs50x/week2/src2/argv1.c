// Missing command-line argument

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check for second word
    if (argc != 2)
    {
        // Print missing
        printf("missing command-line argument\n");
        
        // Exit the code
        return 1;
    }
    
    // Print word after hello
    printf("hello, %s\n", argv[1]);
    return 0;
}
