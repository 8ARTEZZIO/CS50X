// scrabble game

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int alph_ind(char s);
string ask_player(int player_nums);
int translate_points(string word);
int find_p(int ind);

int main(void)
{
    // prompt players
    string word_1 = ask_player(1);
    string word_2 = ask_player(2);

    // translate words into points
    int p_1 = translate_points(word_1);
    int p_2 = translate_points(word_2);

    // announce the winner (or a tie)
    if (p_1 < p_2)
    {
        printf("Player 2 wins!\n");
    }
    else if (p_1 > p_2)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

// prompt player
string ask_player(int player_num)
{
    string word;
    int cmp;
    do
    {
        word = get_string("Player %i: ", player_num);
        cmp = strcmp(word, "");
    }
    while (cmp == 0);

    return word;
}

// translate words into points
int translate_points(string word)
{
    int points = 0;

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // find a letter
        char letter = toupper(word[i]);

        // input a letter to find it's index
        if (isalpha(letter))
        {
            int ind = alph_ind(letter);

            // find a number based on the index
            int num = find_p(ind);

            // add num to points
            points += num;
        }
    }

    return points;
}

// find alphabet index of a letter
int alph_ind(char s)
{
    // letters
    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                      'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int n = 0;
    char c;
    do
    {
        c = letters[n];
        n++;
    }
    while (c != s);

    return n - 1;
}

// find points
int find_p(int ind)
{
    int points;
    // numbers
    int values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    return values[ind];
}
