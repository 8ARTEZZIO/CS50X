// Program that checks the correctness of debit/credit card numbers

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int algo(long num);
int split_sum(long num);
int bank_nr(long num);
string bank_name(int l, int length);
long ask_number(void);
int len(long num);

int main(void)
{
    // ask user for number
    long number = ask_number();

    int k = algo(number);

    // printf("%i\n", k);

    int length = len(number);
    // if a bank name exists
    // and the k % 10 = 0
    if (k % 10 == 0)
    // then evaluate
    {
        int nr = bank_nr(number);
        string name = bank_name(nr, length);
        printf("%s", name);
    }
    // otherwise print 'INVALID'
    else
    {
        printf("INVALID\n");
    }
}

// implementation of luhn's algorithm
int algo(long num)
{
    int count = 0;
    int first_sum = 0;
    int secnd_sum = 0;
    int total_sum;
    int digit;

    // loop until the number exists
    while (num)
    {
        digit = num % 10;
        num /= 10;

        // if the count is uneven (numbers starting as second from the right)
        if (count % 2 != 0)
        {
            // double the number first
            int doubl_num = digit * 2;

            // split numbers recursively if greater than 9
            if (doubl_num > 9)
            {
                int p = split_sum(doubl_num);
                first_sum += p;
            }
            // else just add it to the first sum
            else
            {
                first_sum += doubl_num;
            }
        }

        // otherwise add simple num to the second sum
        else
        {
            secnd_sum += digit;
        }

        count++; // increment count by 1
    }

    // if the count is more than 10 then continue
    if (count > 10)
    {
        total_sum = first_sum + secnd_sum;
    }
    // else ignore and return uncorrect value that %10!=0
    else
    {
        total_sum = 1;
    }

    return total_sum;
}

// split nums greater than 9 e.g. 12 -> 1+2 = 3 etc
int split_sum(long num)
{
    int count = 0;
    int sum = 0;
    int digit;

    while (num)
    {
        digit = num % 10;
        num /= 10;

        sum += digit;

        count++; // increment count by 1
    }

    return sum;
}

// ask user for the number
long ask_number(void)
{
    long number;
    // keep asking until the user won't give the correct 'long' num
    do
    {
        number = get_long("Number: ");
    }
    while (false);

    return number;
}

// func that finds two first digits of any num >=100
int bank_nr(long num)
{
    long local = num;

    while (local >= 100)
    {
        local /= 10;
    }

    return local;
}

// func that checks banks 2 first nums and the lengths of entire code simultaneously
string bank_name(int l, int length)
{
    string bank = "";

    // printf("leng: %i\n", length);

    // amex (34 or 37; length equal 15)
    if ((l == 34 || l == 37) && (length == 15))
    {
        bank = "AMEX\n";
    }
    // mastercard (51-55; length equal 16)
    else if ((l >= 51 && l <= 55) && (length == 16))
    {
        bank = "MASTERCARD\n";
    }
    // visa (40-49 [anything starting with 4]; length equal 14 or 16 but the edge case forces using
    // 13)
    else if (l >= 40 && l < 50 && (length == 13 || length == 14 || length == 16))
    {
        bank = "VISA\n";
    }
    // if any of cases from above fails then print out 'INVALID'
    else
    {
        bank = "INVALID\n";
    }
    return bank;
}

// find length of a number
int len(long num)
{
    int count = 0;
    int total_sum = 0;
    int digit;

    while (num)
    {
        digit = num % 10;
        num /= 10;
        count++;
    }

    return count;
}
