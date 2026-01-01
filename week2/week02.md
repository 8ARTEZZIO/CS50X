**Week 2**

---

# Compiling

1. Encryption and decryption are the core concepts of a compiling process.
2. Compiler is converting source code into machine code that can be understood by a computer.
3. E.g.:
  ```
  #icnlude <stdio.h>
  int main(void)
  {
    printf("hello, world\n");
  }
  ```
  Compiler will take the code from above and convert it into:

  ![machine code](https://cs50.harvard.edu/x/notes/2/cs50Week2Slide012.png)

4. VS Code is utilizing the `clang` compiler or just simplified - c language.

   `clang -o hello hello.c`

   keywords are: `-o hello hello.c`

   run: `./hello`

   and the program will run as intended.


5. In order to take into account the third-party libraries e.g. cs50.h we need to:

   `clang -o hello hello.c -lcs50`

6. Using `make <name.c>` is perfectly fine though.
7. Compiling involves four major steps:
   -preprocessing,
   -compiling,
   -assembling,
   -linking.

---

# Debugging

1. Debugging is a process of locating and removing/fixing bugs from your code.
2. Tools like:
   - CS50.ai,
   - debugger.
3. In oder to run a vsc debugger in cs50 course we need to run the following command:

   `debug50 ./<name>`

   It'll launch the debugging window where we can choose a break point and run the process.

   ![debugging](https://cs50.harvard.edu/x/notes/2/cs50Week2Debugging.png)

---

# Arrays

1. Each data requires a certain amount of system resources:
   - `bool` 1 byte
   - `int` 4 bytes
   - `long` 8 bytes
   - `float` 4 bytes
   - `double` 8 bytes
   - `char` 1 byte
   - `string` ? bytes
2. Inside of every computer there's a finite amount of mem available:

     ![memory picture](https://cs50.harvard.edu/x/notes/2/cs50Week2Slide084.png)
  
     Physically, the memory could be visualized as follows:
  
     ![memory array](https://cs50.harvard.edu/x/notes/2/cs50Week2Slide087.png)
  
     E.g. `int` might look as follows:
  
     ![int memory](https://cs50.harvard.edu/x/notes/2/cs50Week2Slide088.png)

    We can generate a program ther explores these concepts:
    
    ```
    // Averages three (hardcoded) numbers
    
    #include <stdio.h>
    
    int main(void)
    {
        // Scores
        int score1 = 72;
        int score2 = 73;
        int score3 = 33;
    
        // Print average
        printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
    }
    ```
    
    The divider is a floating number `3.0` so the result will be a floating num too.
    
    These vars are stored in a memory in the following way:
    
    ![memory visualization](https://cs50.harvard.edu/x/notes/2/cs50Week2Slide098.png)

3.1. We can upgrade the code from above by creating an array:

    // Averages three (hardcoded) numbers
    
    #include <stdio.h>
    
    int main(void)
    {
        // Scores
        int scores[3];
        int scores[0] = 72;
        int scores[1] = 73;
        int scores[2] = 33;
    
        // Print average
        printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    }

3.2. There's still a room for improvement:    

    // Averages three numbers using an array and a loop
    
    #include <cs50.h>
    #include <stdio.h>
    
    int main(void)
    {
        // Get scores
        int scores[3];
        for (int i = 0; i < 3; i++)
        {
            scores[i] = get_int("Score: ");
        }
    
        // Print average
        printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    }

---

# Strings

1. `String` is just an array of variables of type `char` (an array of characters)
2. The example code that proofs the concept:
   ```
   // Prints chars
  
    #include <stdio.h>
    
    int main(void)
    {
        char c1 = 'H';
        char c2 = 'I';
        char c3 = '!';
    
        printf("%c%c%c\n", c1, c2, c3);
    }
   ```
3. The characters are simply the image representations of ASCII nums:
   ```
    #include <stdio.h>
    
    int main(void)
    {
        char c1 = 'H';
        char c2 = 'I';
        char c3 = '!';
    
        printf("%i %i %i\n", c1, c2, c3);
    }
   ```
4. To further understand how a `string` works, write the following code:
   ```
   // Treats string as array
    
    #include <cs50.h>
    #include <stdio.h>
    
    int main(void)
    {
        string s = "HI!";
        printf("%c%c%c\n", s[0], s[1], s[2]);
    }
   ```

   We can replase `%c` with `%i` as follows:

   ```
       
    // Prints string's ASCII codes, including NUL
    
    #include <cs50.h>
    #include <stdio.h>
    
    int main(void)
    {
        string s = "HI!";
        printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    }
   ```
   This prints the string's ASCII codes, including NUL.

   Let's imagine that we want to say 'HI!\nBYE!\n'. Modidy your code as follows:

   ```
   // Multiple strings

   #include <cs50.h>
   #include <stdio.h>

   int main(void)
   {
     string s = "HI!";
     string t = "BYE!";

     printf("%s\n", s);
     printf("%s\n", t);
   }

   ```

    The code from above can be visualised as follows:

     ![](https://cs50.harvard.edu/x/notes/2/cs50Week2Slide126.png)

    We can further improve this code:

    ```  
    // Array of strings
    
    #include <cs50.h>
    #include <stdio.h>
    
    int main(void)
    {
        string words[2];
    
        words[0] = "HI!";
        words[1] = "BYE!";
    
        printf("%s\n", words[0]);
        printf("%s\n", words[1]);
        // or
        //printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
        //printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
    }
    ```

---

# String Length

1. A common problem in lang C (and some other) is finding a length of a string.
   ```
   // Find length of a string
    
    #include <cs50.h>
    #include <stdio.h>
    
    int main(void)
    {
        string s = get_string("Type word: ");
        int count = 0;
    
        while (s[count] != '\0')
        {
            count++;
        }
        printf("%i\n", count);
    }
   ```
  We could abstract away the couting part of the function as well.

2. Because this is such a common problem, programmers created something like libraries.
   In this case it's called <string.h>.

   ```
    // Determines the length of a string using a function
    
    #include <cs50.h>
    #include <stdio.h>
    #include <string.h>
    
    int main(void)
    {
        // Prompt for user's name
        string name = get_string("Name: ");
        int length = strlen(name);
        printf("%i\n", length);
    }
   ```

3. Another example is uppercasing the words/letters in C and other languages.
   Instead of going into weeds and bushes (which I'm showing below)
   ```
   // transfrorm words into uppercased ones
      
    #include <cs50.h>
    #include <stdio.h>
    #include <string.h>
    
    int main(void)
    {
        string s = get_string("Input: ");
    
        printf("Output: ");
        for (int i=0, n=strlen(s); i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", s[i] - 32);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
   ```
   We can just use the library <ctype.h>:
   ```
    // Uppercases string using ctype library
    
    #include <cs50.h>
    #include <ctype.h>
    #include <stdio.h>
    #include <string.h>
    
    int main(void)
    {
        string s = get_string("Before: ");
        printf("After:  ");
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            printf("%c", toupper(s[i]));
        }
        printf("\n");
    }
   ```

---

# Command-Line Arguments

1. Command-Line Arguments are those arguments that are passed to your program at the command line.
   E.g.: `clang code code.c -lcs50`

2. The example of it's practical but basic usage is the following code:
   ``` greet.c
    // Prints a command-line argument
    
    #include <cs50.h>
    #include <stdio.h>
    
    int main(int argc, string argv[])
    {
        if (argc == 2)
        {
            printf("hello, %s\n", argv[1]);
        }
        else
        {
            printf("hello, world\n");
        }
    }
   ```
   This program knows the amount of passed arguments and keeps them inside of array `argv[]`.
   `./greet Bartek` -> `hello, Bartek`

---

# Exit Status

1. The program sends a special exit code to the computer after ending.
2. No error is `0`, error - `1`.
3. The following code shows it in a simple way:
   ```
   // Returns explicit value from main

    #include <cs50.h>
    #include <stdio.h>
    
    int main(int argc, string argv[])
    {
        if (argc != 2)
        {
            printf("Missing command-line argument\n");
            return 1;
        }
        printf("hello, %s\n", argv[1]);
        return 0;
    }
   ```
  You can check the returned value by typing `echo $?`.

---

# Cryptography

1. Cryptography is an art of ciphering and deciphering a message.
2. `plaintext` + `key` >- `cipher` -> `ciphertext`













      

   


   



   

   

    
    







