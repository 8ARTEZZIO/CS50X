// Practice conditionals and comparisons

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = get_int("1st num: \n");
    int j = get_int("2nd num: \n");
    int k = get_int("3rd num: \n");

    if (i > j && i > k)
    {
        printf("The 1st number %i is the largest\n", i);
    }
    else if (j > i && j > k)
    {
        printf("The 2nd number %i is the largest\n", j);
    }
    else if (k > i && k > j)
    {
        printf("The 3rd number %i is the largest\n", k);
    }
    else
    {
        printf("All numbers are equal.\n");
    }
}
