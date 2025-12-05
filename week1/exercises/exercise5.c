// Use modulus operator to asses
// if the provided nr is Even/Odd

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_long("Provide a number: \n");

    if ( i%2 == 0 )
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
