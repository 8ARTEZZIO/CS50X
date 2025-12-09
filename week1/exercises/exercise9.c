// 1. Ask for height 1-8 (input validation required)
// 2. Prints a left-aligned mario pyramid

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");

    for (int i = 1; i <= height; i++)
    {
        for (int linenum = 0; linenum < i; linenum++)
        {
            printf("#");
        }
        printf("\n");
    }
}
