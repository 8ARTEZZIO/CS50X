# Welcome in Week 3

This week will deepen the knowledge about algorithms.
Here we'll learn space and time complexity and why it's so important.

![time/size complexity](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20220812122843/Logarithmic-time-complexity-blog-1.jpg)

From the img above we can see that algorithms can be slow, or ineficcient.
In rare cases the slower solution might be also the only available option.
Regardless, we should always look for the most optimized code.

---

# Linear Search

1. (my explanation of what I've learned)
   
   ```linear_search.c
   
   int main(void)
   {
       // let's create and array 'arr' that stores 7 integers
       int arr[7] = {1, 2, 5, 10, 20, 50, 100}
       
       // and now we want to find the num 50
       // we can do it in a simplest but least effective
       // we can use Linear Search algorithm
       // it'll simply iterate through the entire array until
       // it finds the desired number
    
       int des_num = 50;
       
       for ( int i = 0; i < 7; i++ )
       {
           if ( arr[i] == des_num )
           {
               return 0;
           }
       }
       // if there was no occurence of that num
       // then signal it
       return 1;
   }
   ```
---

# Binary Search

1. This is the most commonly used algorithm in searching through
   big datasets e.g. google's databases.
   The time/space complexity is log2n.
   Basically, it means that to iterate through 2x size the algorithm
   will need only one extra step...and this, as you can imagine, is powerful.

2. Pseudocode:
   
   ```
   If no array
      return False
   If array
      Sort the array

      search from x to y
         middle = (x+y)/2
         if array[middle] == num
            return True
      
         else if array[middle] > num
            search from array[0] to array[middle-1]
   
         else if array[middle] < num
            search from array[middle+1] to array[n-1]
   ```

   From here we can see roughly how the final code could look like.

---

# Running Time

1. Running time is calculated by using the big O notation.
2. It's the shape of the curve (of specific functions) that shows the efficiency of an algo.
   Some common running times we may see are:
   - O(n<sup>2</sup>)
   - O(n log n)
   - O(n)
   - O(log n)
   - O(1)

   Of the running times above the O(n<sup>2</sup>) is the slowest while the O(1) is the fastest.

3. The linear search was of order O(n) because it required the n steps in which n is the size of the array.
4. Binary search was of order O(log n) because it was taking fewer and fewer steps even in worst case.
5. The *best case* is called `lower bound` and the *worst case* - `upper bound`.
6. The `Ω` is used to denote the BEST CASE of an algo, such as Ω(log n).
7. The `Θ` is used to denote where the upper and lower bounds are the same.
8. *Asymptotic notation* is the measure of how well algorithms can perform on increasing scale.

---

# search.c

*explained in `Linear Search` above*

---

# phonebook.c

```phonebook.c
// Implements a phone book without structs

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Arrays of strings
    string names[] = {"Kelly", "David", "John"};
    string numbers[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750"};

    // Search for name
    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
```
While this code works there are many inefficiencies which we could improve.
We could store names and numbers in something called 'struct' and we could
also use the binary search in order to decrease time/space complexity.

---

# Structs

1. We can create our own data types via a `struct`.
2. For example:
   ```struct.c
   typedef struct
   {
       string name;
       string number;
   } person;
   ```
3. Now we can make improve our code from above:
   ```phonebook.c
   // Implements a phone book with structs
   
   #include <cs50.h>
   #include <stdio.h>
   #include <string.h>
   
   typedef struct
   {
       string name;
       string number;
   } person;
   
   int main(void)
   {
       person people[3];
   
       people[0].name = "Kelly";
       people[0].number = "+1-617-495-1000";
   
       people[1].name = "David";
       people[1].number = "+1-617-495-1000";
   
       people[2].name = "John";
       people[2].number = "+1-949-468-2750";
   
       // Search for name
       string name = get_string("Name: ");
       for (int i = 0; i < 3; i++)
       {
           if (strcmp(people[i].name, name) == 0)
           {
               printf("Found %s\n", people[i].number);
               return 0;
           }
       }
       printf("Not found\n");
       return 1;
   }
   ```
   The code begins with `typedef struct` where a new datatype called `person`
   is defined. In the following code we initialize the data type by typing
   `people person[3];` which simply makes and array of 3 elements that we've made.
   The specific thing to remember is the *dot notation*, such as `people[0].name`.

---

# Sorting and Selection Sort

1. Sorting the list is basically an act of organising based on chosen criteria e.g.
   ascending numbers or alphabetic order.
2. The sorted list is much easier for a computer to utilize it.
   E.g. we can use binary search only on sorted array!
3. There are many different types of sorting algorithms and *selection sort* is one of them.
   ```
   For i from 0 to n–1
    Find smallest number between numbers[i] and numbers[n-1]
    Swap smallest number with numbers[i]
   ```
   This algorithm has to iterate in a following number of steps:
   ```
   (n - 1) + (n - 2) + (n - 3) + ... + 1
   ```
   And this is n(n-1)/2 or, more simiply O(n<sup>2</sup>).

   This algorithm will run with such a complexity in a best and worst case.

---

# Bubble Sort
   







   





