
""" 

[22,27,16,2,18,6]

(-1-) Write the stages of the above given sequence according to the insertion sort.

   
 Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.The array is
virtually split into a sorted and an unsorted part.Values from the unsorted part are picked and placedat the correct position
in the sorted part.



 1)   ->   [22|27,16,2,18,6] (one element sorted)

 2)   ->   [22,27|16,2,18,6] (two elements sorted)

 3)   ->   [16,22,27|2,18,6] (three elements sorted)

 4)   ->   [2,16,22,27|18,6] (four elements sorted)

 5)   ->   [2,16,18,22,27|6] (five elements sorted)

 6)   ->   [2,6,16,18,22,27|] (all elements sorted)

-----------------------------------------------------------------------------------------------------------------------------------

(-2-) Write the Big O Notation.

1)    ->   O(n²) 

-----------------------------------------------------------------------------------------------------------------------------------

(-3-) Write the time complexes.

1) BEST CASE    : if given sequentially -> n

2) AVERAGE CASE : average of best and worst cases -> n²

3) WORST CASE   : if given in reverse order -> n*((n+1)/2) -> n²

-----------------------------------------------------------------------------------------------------------------------------------

(-4-) After the array is sorted, which case does the number 18 fall under?

Since it is in the middle of the dataset, it is covered by the average case.

-----------------------------------------------------------------------------------------------------------------------------------

(-5-) Write down the first 4 steps of [7,3,5,8,2,9,4,15.6] according to Insertion Sort.

1)   ->   [7|3,5,8,2,9,4,15.6] (one element sorted)

2)   ->   [3,7|5,8,2,9,4,15.6] (two elements sorted)

3)   ->   [3,5,7|8,2,9,4,15.6] (three elements sorted)

4)   ->   [3,5,7,8|2,9,4,15.6] (four elements sorted)

"""

