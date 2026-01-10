// caesar cipher program

#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int ciphertext(string key);
bool check_duplicates(string s);

int main(int argc, string argv[])
{
    // if user provided exactly two arguments
    // ./<program> <integer>
    // then proceed with calculations
    if (argc == 2)
    {
        string key = argv[1];
        if (strlen(key) == 26)
        {
            if (check_duplicates(key))
            {
                return 1;
            }
            else
            {
                int e = ciphertext(key);
                return e;
            }
        }
        else
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }

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

int ciphertext(string key)
{
    char arr[26];

    // assign each key letter to empty spaces in array
    for (int i = 0; i < 26; i++)
    {
        char letter = key[i];

        // check for invalid characters
        if (isalpha(letter))
        {
            arr[i] = letter;
        }
        else
        {
            return 1;
        }
    }
    string text = get_string("plaintext:  ");

    printf("ciphertext: ");

    for (int j = 0, n = strlen(text); j < n; j++)
    {
        char c = text[j];

        // if uppercase
        if (c >= 65 && c <= 90)
        {
            int x = ((c - 65) % 26);
            printf("%c", toupper(arr[x]));
        }
        // if lowercase
        else if (c >= 97 && c <= 122)
        {
            int y = ((c - 97) % 26);
            printf("%c", tolower(arr[y]));
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}

// check for duplicates in a given string of 26
// non repeating a-z characters
bool check_duplicates(string s)
{
    char lett[26];

    // grab each letter of the key
    for (int i = 0; i < 26; i++)
    {
        // for each letter
        // check if there is no other occurence
        // in the array of characters
        for (int j = 0; j < 26; j++)
        {
            if (tolower(s[i]) == tolower(lett[j]) && i != j)
            {
                return 1;
            }
        }
        lett[i] = s[i];
    }
    return 0;
}
