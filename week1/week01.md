**Lecture 1**

---

# Visual Studio Code for CS50 #

1. You can open VS Code ![here](cs50.dev)
2. The compiler can be divided into a number of regions:
   ![code](https://cs50.harvard.edu/x/notes/1/cs50Week1Slide017.png)
   1.file explorer on the left
   2.text editor in the middle
   3.command line interface, known as a CLI, command line, or terminal window, where we can send commands to the computer in the cloud.
3. Some common command-line arguments:
   - cd, changing our current directory
   - cp, for copying files and directories,
   - ls, for listing files in a directory,
   - mkdir, for making a directory,
   - mv, for moving (renaming) files and directories,
   - rm, for removing (deleting) files,
   - rmdir, for removing (deleting) directories

---

# Hello World #

1. For writing, compiling and running we'll need:
   - `code hello.c`
   - `make hello`
   - `./hello`,
  respectively.

`

    // A program that says hello to the world
    
    #include <stdio.h>
    
    int main(void)
    {
        printf("hello, world\n");
    }

`

2. As every programming language, the way the code is written is critical.
   Ignoring this rule will simply make the code fail and not execute.

---

# From Scratch to C #

1. `printf("hello, world\n");` does exactly the same as `say` in scratch
2. There are more ways to write so called 'escape characters':
   - \n create a new line
   - \r return to the start of a line
   - \' print a single quote
   - \\ print a backslash

---

# Header Files and CS50 Manual Pages

1. `#include <stdio.h>` is a special command that tells the compiler to import library called 'stdio.h'
2. Library is simply a code written by someone that is open for use.
3. CS50 has it's own library called `cs50.h`. Commands that it contains are:
   -get_char
   -get_double
   -get_float
   -get_int
   -get_long
   -get_string

---

# Hello, You

1. As in Scratch we've had an ability to prompt the user and concatenate the output to the answer, so in C we can do the same:

   ```
   #include <stdio.h>

   int main(void):
   {
       string answer = get_string("What's your name? ");
       printf("hello, %s\n", answer);
   }
   ```

   - run `make hello` to compile the code,
   - run script by typing `./hello`

---

# Types

1. `printf` allows to concatenate many formats:
   - %c   bool,
   - %f   char,
   - %i   float,
   - %li  int,
   - %s   string

---

# Conditionals

1. In C you can compare two vals as follows:

   ```
   if (x < y)
   {
       printf("x is less than y\n");
   }
   else
   {
       printf("x is not less than y\n");
   }
   ```

   or more conditionals
   
   ```
   if (x < y)
   {
       printf("x is less than y\n");
   }
   else if (x > y)
   {
       printf("x is greater than y\n");
   }
   else
   {
       printf("x is equal y\n");
   }
   ```

---

# Operators

1. Operators are mathematical operations supported by given langage.
2. Operators in C:
   - `+`   addition,
   - `-`   subtraction,
   - `*`   multiplication,
   - `/`   division,
   - `%`   remainder,

---

# Variables

1. Assigning an value to an `int` or integer in C:
   ```
   int counter = 0;
   ```
2. Adding value of one to `counter`:
   ```
   counter = counter + 1;
   ```
   or
   ```
   counter += 1;
   ```
   or
   ```
   counter++;
   ```
   Subtracting works the same.

---

# compare.c
