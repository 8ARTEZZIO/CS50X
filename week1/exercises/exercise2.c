// Goal:
// Print "Hello, CS50 <name> <name>!

// Import necessary libs

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Your name: ");
    printf("Welcome to C, %s %s!\n", name, name); // Print user's name twice
}

