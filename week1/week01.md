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

   // Meow once
   void mewo(void)
   {
      printf("meow\n");
   }
   ```

3. Your function can be further modified to accept input:
   ```
   #include <stdio.h>

   void meow(int n);

   int main(void)
   {
      mewo(3);
   }

   // Meow some number of times
   void meow(int n)
   {
      for (int i = 0; i < n; i++)
      {
         printf("meow\n");
      }
   }
   ```

   Notice that now the function `meow(int n)` accepts `n` as an input.

4. Additionally we can get user input:
   ```
   // User input

   #include <cs50.h>
   #include <stdio.h>

   void meow(int n);

   int main(void)
   {
      int n;
      do
      {
         n = get_num("Number: ");
      }
      while (n < 1);
      meow(n);
   }

   // Meow some number of times
   void meow(int n)
   {
      for (int i = 0; i < n; i++)
      {
         printf("meow\n");
      }
   }
   ```

5. We can even test to ensure that input we get provided by the user is correct:
    ```
    #include <cs50.h>
    #include <stdio.h>

    int get_positive_int(void);
    void meow(int n);

    int main(void)
    {
       int n = get_positive_int();
       meow(n);
    }

    // Get number of meows
    int get_positive_int(void)
    {
       int n;
       do
       {
          n = get_int("Number": ");
       }
       while (n < 1);
       return n;
    }

    // Meow some number of times
    void meow(int n)
    {
       for (int i = 0; i < n; i++)
       {
          printf("meow\n");
       }
    }
    ```

---

# Correctness, Design, Style

1. We can check if the code is correct by following 3 standards:
   - 'Does the code run as intended?' which in this course can be checked by `check50`,
   - 'How well is the code designed' - `design50` does it for you inside of this course
   - 'How aesthetically pleasing and consistent is the code?' - `style50`

---

# Mario

1. To create games of write software we need to divide complicated problems into small, tangible steps.
2. In this case to create a row:
   ![mario](https://cs50.harvard.edu/x/notes/1/cs50Week1Slide123.png)

   We can write the following code:

   ```
   #include <stdio.h>

   int main(void)
   {
      for (int i = 0; i < 4; i++)
      {
          printf("?");
      }
      printf("\n");
   }
   ```
   The question marks are printed in a very specific way to 'stick' to each other.

3. To create vertical blocks like on a following picture:

    ![mario_blocks](https://cs50.harvard.edu/x/notes/1/cs50Week1Slide125.png)

    We can write a following code:

    ```
    #include <stdio.h>

    int main(void)
    {
       for (int i = 0; i < 4; i++)
       {
           printf("#\n");
       }
    }

    ```

4. To create a simple 3x3 block we'll need to use nested for loops:

    ![mario_blocks](https://cs50.harvard.edu/x/notes/1/cs50Week1Slide127.png)

   The code is as follows:

   ```
   #include <stdio.h>

   int main(void)
   {
       for (int i = 0; i < 3; i++)
       {
          for (int i = 0; i < 3; j++)
          {
               printf("#");
          }
       }
   }
   ```

   To make block with a constant size we can use a code as follows:

   ```
   #include <stdio.h>

   int main(void)
   {
       const int n = 3;
       for (int i = 0; i < n; i++)
       {
          for (int i = 0; i < n; j++)
          {
               printf("#");
          }
       }
   }
   ```

   The `n` is a constant. It can never be changed without changing the code inside.

---

# Comments

1. Comments are supposed to explain code to colleagues and to yourself (e.g. afte a break from coding etc.)
2. All code in this course must include robust comments.
3. In language `C` we use `//` inside of the code, followed by a comment.
   ```
   // Helper function
   
   #include <stdio.h>
   
   void print_row(int width);
     
   int main(void)
   {
       const int n = 3;
   
       // Print n rows
       for (int i = 0; i < n; i++)
       {
           print_row(n);
       }
   }
   
   void print_row(int width)
   {
       for (int i = 0; i < width; i++)
       {
           printf("#");
       }
       printf("\n");
   }
   ```

---

# More About Operators

1. We can write a very simple calculator in C:
   ```
   // Addition
   
   #include <cs50.h>
   #include <stdio.h>
   
   int main(void)
   {
       // Prompt user for x
       int x = get_int("x: ");
   
       // Prompt user for y
       int y = get_int("y: ");
   
       // Add numbers
       int z = x + y;
   
       // Perform addition
       printf("%i\n", z);
   }
   ```

   The `get_int` funtion takes an input twice and then the output is printed automatically.

2. The number can be doubled by using the following line
   ```
   long dollars = 1
   dollars *= 2
   printf("$%li\n", dollars)
   ```
   It works similar as in many other languages.

3. Types of data that will be mentioned in this course include:
   
    -`bool`, a Boolean expression of either true or false
    -`char`, a single character like a or 2
    -`double`, a floating-point value with more digits than a float
    -`float`, a floating-point value, or a real number with a decimal value
    -`int`, integers up to a certain size, or number of bits
    -`long`, integers with more bits, so they can count higher than an int
    -`string`, a string of characters

---

# Truncation

1. Another issue that can arise when using data types includes truncation:

   ```
   // Division with ints, demonstrating truncation

   #inlcude <cs50.h>
   #include <stdio.h>
   
   int main(void)
   {
       // Prompt user for x
       int x = get_int("x: ");
   
       // Prompt user for y
       int y = get_int("y: ");
   
       // Divide x by y
       printf("%i\n", x / y);
   }
   ```
   This will result in any digit after any digits after the decimal have been thrown away.

2. To solve this we can use `float`:

   ```
   // Floats
   
   #include <cs50.h>
   #include <stdio.h>
   
   int main(void)
   {
       // Prompt user for x
       float x = get_float("x: ");
   
       // Prompt user for y
       float y = get_float("y: ");
   
       // Divide x by y
       printf("%.50f\n", x / y);
   }
   ```

   This will solve the problem partially but it'll still cause some imprecision.

3. During coding, pay attention to data types being used.

---

# The end of Week 1


   
   


       















       
     















