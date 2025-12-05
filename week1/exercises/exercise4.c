// For loops in C
// Script that:
// 1. Prompts user for n number
// 2. Displays 'meow' n times

#include <cs50.h>
#include <stdio.h>

int ask_number(void);
void meow(int n);

int main(void)
{
    int n = ask_number();
    meow(n);
}

int ask_number(void)
{
    int n = get_int("Say a random number: \n");
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}
