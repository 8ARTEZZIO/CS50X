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

## argc (argument count) ##
  This integer-type variable will store the number of command-line 
  arguments the user typed when the program was executed.

  | command | argc |
  |----------|----------|
  | ./greedy | 1 |
  | ./greedy 1024 cs50 | 3 |

## argv (argument vector)
  This array of strings stores, one string per element, the
  actual text the user typed at the command-line when 
  the program was executed.

  The firts element of argv is always found at argv[0].
  The last element of argv is always found at argv[argv-1]




