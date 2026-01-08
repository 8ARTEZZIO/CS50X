// caesar cipher program

#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ciphertext(int i);
bool isnumber(string s);

int main(int argc, string argv[])
{
    // if user provided exactly two arguments
    // ./<program> <integer>
    // then proceed with calculations
    if (argc == 2 && isnumber(argv[1]))
    {
        int k = atoi(argv[1]);
        ciphertext(k);
        return 0;
    }

    // is user provided more or less arguments than 2
    // OR the second argument is not numeric
    // then output hint for the correct usage
    else
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
}

// text cipher algorithm
void ciphertext(int k)
{
    string s = get_string("plaintext:  ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        char c = s[i];

        // if uppercase
        if (c >= 65 && c <= 90)
        {
            printf("%c", (((c - 65) + k) % 26 + 65));
        }
        // if lowercase
        else if (c >= 97 && c <= 122)
        {
            printf("%c", ((c - 97) + k) % 26 + 97);
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
}

// check if the string entered is a number
bool isnumber(string s)
{
    // assume true input
    bool correct = 1;

    // prove the input by iterating it
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // if any digit is non numeric
        // then negate the bool value
        if (isdigit(s[i]) == 0)
        {
            correct = 0;
        }
    }
    return correct;
}
