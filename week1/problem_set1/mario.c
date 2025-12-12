// Print a mario pyramid (more advanced version)

#include <cs50.h>
#include <stdio.h>
#include <string.h>

void print_pyramid(int height);
void print_row(int rowNr, int height);

int main(void)
{
    int height;
    // Ask an user for the height until it's within constraints
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    print_pyramid(height);
}

void print_pyramid(int height)
{
    // loop through the number responding to the height
    for (int i = 0; i < height; i++)
    {
        print_row(i + 1, height);
    }
}

void print_row(int rowNr, int height)
{
    // initialize string
    char r[8] = "";
    // loop in order to concatenate the string with '#'
    for (int j = 0; j < rowNr; j++)
    {
        strcat(r, "#");
    }
    // format string <left inverted>  <right normal>
    printf("%*s  %s", height, r, r);
    printf("\n");
}
