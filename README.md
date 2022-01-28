# Algorithms
Practicing the algorithms in Uni

Binary Search-
 

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
