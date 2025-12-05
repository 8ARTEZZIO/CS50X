// Simple calculator

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_float("1st nr: ");
    int y = get_float("2nd nr: ");
    char z = get_char("[+, -, *, /]: ");

    if ( z == '*' )
    {
        float c = (x * y);
        printf("Output: %.2f\n", c);
    }
    else if ( z == '-' )
    {
        float c = (x - y);
        printf("Output: %.2f\n", c);
    }
    else if ( z == '+' )
    {
        float c = (x + y);
        printf("Output: %.2f\n", c);
    }
    else if ( z == '/' )
    {
        float c = (double)x / (double)y;
        printf("Output: %.2f\n", c);
    }
}
