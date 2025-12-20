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







