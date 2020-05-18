// Printing a command line argument

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // Check for second word
    if (argc == 2)
    {
        // Print word after hello
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        // Print hello world
        printf("hello, world\n");
    }
}
