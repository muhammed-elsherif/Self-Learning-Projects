#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{

    string text = get_string("Text: ");
    float letter = 0;
    float sent = 0;
    float word = 1.0;
    float grade;
    for (int i = 0; i < strlen(text); i++)
    {
        //if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) letter++;
        if (isalpha(text[i]))
        {
            letter++;
        }
        else if ((isspace(text[i]) || (text[i] == '"')) && isalpha(text[i + 1]))
        {
            word++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sent++;
        }
    }
    float L = 100 * letter / word;
    float S = 100 * sent / word;
    grade = 0.0588 * L - 0.296 * S - 15.8;
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}