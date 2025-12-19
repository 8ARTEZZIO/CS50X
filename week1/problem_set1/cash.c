// coin greedy algo

#include <cs50.h>
#include <stdio.h>

int ask_user(void);
void calc_coins(int cash);

int main(void)
{
    int cash = ask_user();
    calc_coins(cash);
}

// ASK USER FOR A CHANGE
int ask_user(void)
{
    int n;
    do
    {
        n = get_int("Change owed: ");
    }
    while (n < 0);

    return n;
}

// GREEDY ALGORITHM
void calc_coins(int cash)
{
    // initialize integers
    int curr_coin = 0;
    int coin_amount = 0;
    // initialize array of coins
    int coins[4] = {25, 10, 5, 1};

    // loop until cash == 0
    while (cash)
    {
        int ratio = cash + 1;
        for (int i = 0; i < 4; i++)
        {
            // 1. CASH MUST BE GREATER THAN THE COIN NOMINATION
            if (cash >= coins[i])
            {
                int coinRatio = cash / coins[i];

                // 2. FIND THE LOWEST CASH/COIN RATIO
                if (coinRatio < ratio)
                {
                    ratio = coinRatio;
                    curr_coin = coins[i];
                }
            }
        }
        coin_amount += ratio;

        // 3. USE REMINDER AS CASH AND REPEATE
        cash %= curr_coin;
    }

    printf("%i\n", coin_amount);
}
