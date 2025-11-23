# Computer Science

1. **Computer programming** is about taking some input and creating some output - thus solving a problem.

  Using three light bulbs, the following could represent zero:
  
  `0 0 0`
  
  Similarly, the following would represent one:
  
  `0 0 1`
  
  By this logic, we could propose that the following equals two:
  
  `0 1 0`
  
  Extending this logic further, the following represents three:
  
  `0 1 1`
  
  Four would appear as:
  
  `1 0 0`
  
  We could, in fact, using only three light bulbs count as high as seven!
  
  `1 1 1`
  
  As a heuristic, we could imagine that the following values represent each possible place in our binary digit:
  
  `4 2 1`
  
  Computers use ‘base-2’ to count. This can be pictured as follows:
  
  `2^2  2^1  2^0`
  
  `4    2    1
  `

2. **Computers** generally use eight bits (also known as a byte) to represent a number.

---

# ASCII

1. **Letters** are represented using ones and zeroes.
2. **Mapping** of the message 'HI!' would look as follows:
   `H  I  !`

   `72 73 33`

3. Here is an expandes map os ASCII values:
  ![ASCII values](https://cs50.harvard.edu/x/2024/notes/0/cs50Week0Slide93.png)

4. Since binary can only count up to 255 we are limited to the number of characters represented by ASCII.

---

# Unicode

1. Because of more and more advanced ways of communication via text the binary system wasn't enough. People started using **Unicode**.

2. The unicode for the generic thumbs up is `U+1F44D`.

3. If you wish, you can learn more about [Unicode](https://en.wikipedia.org/wiki/Unicode)

---

# Representation

1. Zeros and ones can be used to represent color.
2. Red, green, and blue (called `RGB`) is a combination of three numbers.
   ![RGB](https://cs50.harvard.edu/x/2024/notes/0/cs50Week0Slide118.png)
3. It's even possible to use binary to represent images, videos and even music.
4. Music can be stored through MIDI data.

---

# Algorithms

1. Problem-solving is fundamental to CS and computer programming.
2. One of the more popular algorithms for searching through vast **SORTED** data sets is a **Binary Search**.
3. The time and space complexity of such an algorithm is log<sub>2</sub><sup>n</sup>.
   ![big-O notation image](https://cs50.harvard.edu/x/2024/notes/0/cs50Week0Slide141.png)
  This means that doubling the size of the data set would **ONLY ADD ONE STEP**.
  The solution with n and n/2 is iteration one by one with eventual cutting the step by chosen number (2 in n/2 but it can be any other number that cuts dataset in entire **iterable** pieces).

---

# Pseudocode

1. The 




