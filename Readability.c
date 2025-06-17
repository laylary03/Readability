#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

float letter_count(string l);
float word_count(string w);
float sentence_count(string s);

int main(void)
{
    string text = get_string("Text: ");
    float letters = letter_count(text);
    float words = word_count(text);
    float sentences = sentence_count(text);

    // Calculates reading level
    float average_letters = (letters / words) * 100;
    float average_sentences = (sentences / words) * 100;
    int reading_level = round((0.0588 * average_letters) - (0.296 * average_sentences) - 15.8);

    if (reading_level < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (reading_level >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", reading_level);
    }
}

// Counts letters in input
float letter_count(string l)
{
    int count = 0;
    for (int i = 0; i < strlen(l); i++)
    {
        if (isalpha(l[i]))
        {
            count++;
        }
    }
    return count;
}

// Counts number of words in input
float word_count(string w)
{
    int count = 0;
    for (int i = 0; i < strlen(w); i++)
    {
        if (isalpha(w[i]))
        {
            if (w[i + 1] == ' ' || w[i + 1] == '.' || w[i + 1] == '!' || w[i + 1] == '?' ||
                w[i + 1] == ',')
            {
                count++;
            }
        }
    }
    return count;
}

// Counts number of sentences
float sentence_count(string s)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            count++;
        }
    }
    return count;
}
