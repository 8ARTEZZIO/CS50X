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
               return True;
           }
       }
       // if there was no occurence of that num
       // then signal it
       return False;
   }

   
