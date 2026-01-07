// grade level text recogniser

#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int grade_calc(string text);

int main(void)
{
    // take input from user
    string text = get_string("Text: ");

    // calc grade
    int grade = grade_calc(text);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 1 && grade <= 16)
    {
        printf("Grade %d\n", grade);
    }
    else
    {
        printf("Grade 16+\n");
    }
}

// count the number of words
int grade_calc(string text)
{
    // count the total nr of words

    // words count
    float w_count = 0.0;
    // sentences count
    float s_count = 0.0;
    // letters count
    float l_count = 0.0;

    for (int i = 0, n = strlen(text); i <= n; i++)
    {
        char c = text[i];

        // letters count
        // is not space or end of the string
        if (isalpha(c) || isdigit(c))
        {
            l_count++;
        }
        // words count
        // is space or '\0' then add word count
        if (c == 32 || c == 0)
        {
            w_count++;
        }
        // sentences count
        // is period, exclamation or question mark
        if (c == 46 || c == 33 || c == 63)
        {
            s_count++;
        }
    }

    // calculate average sentence per 100 words
    float avg_sentence = ((float) s_count / w_count) * 100.0;

    // calculate average letters per word
    float avg_letters = ((float) l_count / w_count) * 100.0;

    printf("avg sent: %f\navg lett: %f\n", avg_sentence, avg_letters);

    double grade = (0.0588 * avg_letters) - (0.296 * avg_sentence) - 15.8;

    printf("Words: %f\nSentences: %f\nLetters: %f\nGrade: %f\n", w_count, s_count, l_count, grade);

    return round(grade);
}
