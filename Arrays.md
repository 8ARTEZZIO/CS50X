1. Functions
  source code -> compiler -> machine code

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```
VSC terminal commands:
1. make hello.c

2. clang -o hello hello.c -lcs50
   ./hello

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
