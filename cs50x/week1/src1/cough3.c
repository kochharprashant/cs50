// Abstraction with parameterization

#include <stdio.h>
#include <cs50.h>

void cough(int n);

int main(void)
{
    cough(3);
}

// Cough some number of times
void cough(int n)
{
    for (int i = 0; i < 3; i++)
    {
        printf("cough\n");
    }
}
