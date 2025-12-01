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

1. Writing conditional statement:
   ```
   #include <stdio.h>
   #include <cs50.h>

   int main(void)
   {
       // Prompt user for integers
       int x = get_int("What's x? ");
       int y = get_int("What's y? ");

       // Compare integers
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
   }
   ```

---

# agree.c

1. Type `code agree.c`
2. `string` is a series of charactes, `char` is a single character
3. Write code as follows:
   ```
   #include <stdio.h>
   #include <cs50.h>

   // Y/N function
   int main(void)
   {
       char s = get_char("Do you agree? ");
   
       if (s == 'y' || s == 'Y')
       {
           printf("Agreed\n");
       }
       if (s == 'n' || s == 'N')
       {
           printf("Disagreed\n");
       }
   }
4. `||` saved us a lot of space in this case.

---

# Loops and meow.c

1. Loops are naturally included into C and they work the same as in Scratch.
2. Type `code meow.c`
3. Let's write a `while` loop:
   ```
   #include <stdio.h>

   int main(void)
   {
      int i = 3;
   `  while (i > 0)
      {
         printf("meow\n");
         i--;
      }
   }
   ```
   This code will run as long as the value of 'i' is more than 0.
   Per each iteration 'i' will drop it's responding number by 1 thus stopping the loop after i iterations.

   The count-up version:
   ```
   #include <stdio.h>

   int main(void)
   {
      int i = 0;
   `  while (i < 3)
      {
         printf("meow\n");
         i++;
      }
   }
   ```
   It works in the opposite way as the example from above.

4. Another way of repeating some sort of behavior n times is a `for` loop:
   ```
   #include <stdio.h>

   int main(void)
   {
      for (int i = 0; i < 3; i++)
      {
         printf("meow\n");
      }
   }
   ```

5. An infinite `while` loop (don't use it if not needed, it'll loop into infinity and crash the memory):
   ```
   #include <stdio.h>

   int main(void)
   {
      while (true)
      {
         printf("meow\n");
      }
   }
   ```

---

# Functions

1. Basic function in C:
   ```
   void meow(void)
   {
      printf("meow\n");
   }
   ```
   The initial `void` means that the function doesn't output (return) any values.
   The `(void)` meant that the function doesn't take any input.

2. This function can be used in the main function as follows:
   ```
   #include <stdio.h>

   void meow(void);

   int main(void)
   {
      for (int i = 0; i < 3; i++)
      {
         meow();
      }
   }
   
















