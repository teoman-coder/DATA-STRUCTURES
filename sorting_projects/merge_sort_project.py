"""
MERGE SORT

[16,21,11,8,12,22]

(-1-) Write the stages of the above given sequence according to the MERGE SORT.


 The Merge Sort algorithm is a sorting algorithm that is based on the Divide and Conquer paradigm. 
In this algorithm, the array is initially divided into two equal halves and then they are combined
in a sorted manner.



1)   ->   [16,21,11]   --   [8,12,22]

2)   ->   [16,21] <-> [11]   --   [8,12] <-> [22]

3)   ->   [16] <-> [21] <-> [11]   --   [8] <-> [12] <-> [22]

4)   ->   [11,16,21]   --   [8,12,22]

5)   ->   [8,11,12,16,21,22]

-----------------------------------------------------------------------------------------------------------------------------------

(-2-) Write the Big O Notation.

 The array is constantly split in two, so when calculating the big o notation: From the equation 2ˣ = n, we arrive at O(logn). 
 Also, if we add n operations for each row, the big o notation becomes o(nlogn).

"""