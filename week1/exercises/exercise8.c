// Simple program that prints n x m 'blocks' made out of '#'
// To accomplish this I'll use nested loops

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 3; // The vertical size of the row
    int m = 3; //Tmhe horizontal size of the row
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
