# Command-line arguments #

To collect so called command-line arguments from the user, declare main as:

```C
int main(int argc, string argv[])
{
```

These two special arguments enable you to know what data
the user provided at the command line and how much data
they provided.

string argv[] = array of strings

## argc (argument count) #
  This integer-type variable will store the number of command-line 
  arguments the user typed when the program was executed.

  | command | argc |
  |----------|----------|
  | ./greedy | 1 |
  | ./greedy 1024 cs50 | 3 |
