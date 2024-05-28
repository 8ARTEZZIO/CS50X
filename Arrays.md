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

### preprocessing ###

  converts all the '#include' lines to whatever the      
  underlying  prototypes are within the file
  (plus some other stuff)

### compliling ###
  
  translating a C language into other language called
  an assembly language

### assembling ###

  takes a translated assembly code and converts
  it into 0's and 1's

### linking ###

  links all the 0's and 1's into one file

## Array declarations ##

# type name[size] #

## type = what kind of variable each el of the arr will be
## name = the name of array
## size = how many elemnts it contains


If you think of a single elements of an array of type
data-type the same as you would any other variable
of type data-type (which, effectively, it is)
then all the familiar operations make sense.

```C
bool truthtable[10];

truthtable[2] = false;
if(truthtable[7] == true)
{
    printf("TRUE!\n");
}
```

When declaring and initializing an array simultaneously, 
there is a special syntax that may be used to fill up
the array with its starting values.

```C
// instantation syntax
bool truthtable[3] = { false, true, true };

// individual element syntax
bool truthtable[3];
truthtable[0] = false;
truthtable[1] = true;
truthtable[2] = true;
```

Arrays can consist of more than a single dimension.
You can have as many size speficiers as you wish.

```C
bool battleship[10][10];
```

You can choose to think of this as either a 10x10
grid of cells.
  - In memory though, it's really just a 100-element
    one-dimensional array.
  - Multi-dimensional arrays are great abstractions
    to help visualize game boards of other
    complex representations.
  








  








