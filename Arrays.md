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

```C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
```

2. clang -o hello hello.c -lcs50
   ./hello

```C
#include <stdio.h>

void meow(void);

int main(void);
{
    for(int i = i; i < 3; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}
```

###preprocessing###

  converts all the '#include' lines to whatever the      
  underlying  prototypes are within the file
  (plus some other stuff)

###compliling###
  
  translating a C language into other language called
  an assembly language

###assembling###

  takes a translated assembly code and converts
  it into 0's and 1's

###linking###

  links all the 0's and 1's into one file
  

  








