// Hellp Program

#include <stdio.h>
#include <cs50.h>

int main(void)

{
    // Prompt the user for their name
    string name = get_string("Whats your name\n");
    printf("hello, %s\n", name);
}
