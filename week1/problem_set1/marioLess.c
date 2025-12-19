// right-sided pyramid creator

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int ask_user(void);
void print_pyramid(int height);
void print_row(int n, int height);

int main(void)
{
    // ask the user for a correct input
    int height = ask_user();

    // print the pyramid with a chosen correct height
    print_pyramid(height);
}

int ask_user(void)
{
    int n;
    // loop until user complies with the rules
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    return n;
}

// loop through i = height times while incrementing i by 1
void print_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        print_row(i + 1, height);
    }
}

// print the row for given rowNr and pyramid height
void print_row(int rowNr, int height)
{
    // init string
    char r[8] = "";

    // loop in order to concatenate the string with '#'
    for (int j = 0; j < rowNr; j++)
    {
        strcat(r, "#");
    }

    printf("%*s", height, r);
    printf("\n");
}
