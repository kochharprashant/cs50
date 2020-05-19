// Readability problem set

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h> 

int main(void)
{
    // Prompt user for text
    string text = get_string("Text: ");
    
    // Define integar for letters, words, sentences and grade
    int letters = 0, words = 1, sentences = 0;
    
    // Check text for letters, words and sentences
    for (int i = 0; i < strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            // Counter for letters
            letters++;
        }
        else if(isblank(text[i]))
        {
            // Counter for words
            words++;
        }
        else if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            // Counter for sentences
            sentences++;
        }
    }
        
        // Average of letters
        float L = 100.0 * letters / words;
        
        // Average of sentences
        float S = 100.0 * sentences / words;
        
        // Coleman-Liau index formula for grading
        float grade = 0.0588 * L - 0.296 * S - 15.8;
        
        // Check grade is > 16
        if (grade > 16)
        {
            // Print grade
            printf("Grade 16+\n");
        }
        
        // Check grade is between 1 to 16
        else if (grade <= 16 && grade >= 0)
        {
            // Print grade
            printf("Grade %.f\n", round(grade));
        }
        
        // Check grade is below 1
        else
        {
            // Print grade
            printf("Before Grade 1\n");
        }
}
