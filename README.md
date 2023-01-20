# Algorithms
Practicing the algorithms in Uni

------------------Stack------------------
Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

Mainly the following three basic operations are performed in the stack:

**Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
      void push(int item)
        {
             	st.top++;
             	st.s[st.top] =item;
        }

**Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
              int pop()
       {
 	         int item;
	         item = st.s[st.top];
	         st.top--;
         	return (item);
       }

**Peek or Top: Returns the top element of the stack.
**isEmpty: Returns true if the stack is empty, else false.

----------Selection Sort-------------
       This sorting algorithm, iterates through the array and finds the smallest number in the array and swaps it with the first element if it is smaller than the first element. Next, it goes on to the second element and so on until all elements are sorted.         

-----------Pseudocode-----------
     for(i=0;i<count;i++){
      for(j=i+1;j<count;j++){
         if(number[i]>number[j]){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
   }


linear search-*******************************************************************************************************************************************
Linear search is a very simple search algorithm. In this type of search, a sequential search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection.

Pseudocode========================
procedure linear_search (list, value)

   for each item in the list
      if match item == value
         return the item's location
      end if
   end for

end procedure

Binary Search-*******************************************************************************************************************************************
 

*Binary Search is one of the fastest searching algorithms.
*It is used for finding the location of an element in a linear array.
*It works on the principle of divide and conquer technique.
 

Binary Search Algorithm can be applied only on <Sorted arrays>.

 

So, the elements must be arranged in-

Either ascending order if the elements are numbers.
Or dictionary order if the elements are strings.
 

To apply binary search on an unsorted array,

First, sort the array using some sorting technique.
Then, use binary search algorithm.
 
<Binary Search Algorithm Advantages>-
 

The advantages of binary search algorithm are-

*It eliminates half of the list from further searching by using the result of each comparison.
*It indicates whether the element being searched is before or after the current position in the list.
*This information is used to narrow the search.
*For large lists of data, it works significantly better than linear search.
 

<Binary Search Algorithm Disadvantages->
 

The disadvantages of binary search algorithm are-

*It employs recursive approach which requires more stack space.
*Programming binary search algorithm is error prone and difficult.
*The interaction of binary search with memory hierarchy i.e. caching is poor.
(because of its random access nature)

------Question 1-------
Compare Binary Search vs Linear Search
      Answer
        *Binary search requires the input data to be sorted; linear search doesn't
        *Binary search requires an ordering comparison (like >, <); linear search only requires equality comparisons (=)
        *Binary search has complexity O(log n); linear search has complexity O(n)
        *Binary search requires random access to the data; linear search only requires sequential access
        *this can be very important - it means a linear search can stream data of arbitrary size

-------Question 2-------

---------------------------Bucket Sort-------------------------
The basic procedure of performing the bucket sort is given as follows -

First, partition the range into a fixed number of buckets.
Then, toss every element into its appropriate bucket.
After that, sort each bucket individually by applying a sorting algorithm.
And at last, concatenate all the sorted buckets.

**The advantages of bucket sort are -
      - Bucket sort reduces the no. of comparisons.
      - It is asymptotically fast because of the uniform distribution of elements.
      
**The limitations of bucket sort are -

      -It may or may not be a stable sorting algorithm.
      -It is not useful if we have a large array because it increases the cost.
      -It is not an in-place sorting algorithm, because some extra space is required to sort the buckets.
      
 **The best and average-case complexity of bucket sort is O(n + k), and the worst-case complexity of bucket sort is O(n2), where n is the number of items.
