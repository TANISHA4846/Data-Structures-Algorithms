#Sorting Algorithms

This folder contains implementations of important sorting algorithms in C++. These are fundamental for understanding how data can be organized and manipulated efficiently.

##Sorting Techniques Covered

1. **Bubble Sort**
   - Compares adjacent elements and swaps them if they are in the wrong order.
   - Repeats this process until the entire array is sorted.
   - Best Case: O(n)
   - Average Case: O(n²)
   - Worst Case: O(n²)
   - Space: O(1)

2. **Selection Sort**
   - Selects the minimum element from the unsorted part and places it at the beginning.
   - Continues until the entire array is sorted.
   - Best, Average, and Worst Case: O(n²)
   - Space: O(1)

3. **Insertion Sort**
   - Builds the sorted array one element at a time.
   - Efficient for small or nearly sorted arrays.
   - Best Case: O(n)
   - Average/Worst Case: O(n²)
   - Space: O(1)

4. **Merge Sort**
   - Uses divide and conquer.
   - Splits the array, sorts each part, and merges them.
   - Best, Average, Worst Case: O(n log n)
   - Space: O(n)

5. **Quick Sort**
   - Picks a pivot, partitions the array, and recursively sorts the parts.
   - Very efficient on average, used in many standard libraries.
   - Best/Average Case: O(n log n)
   - Worst Case: O(n²)
   - Space: O(log n)


## 📌 When to Use What?

- Use **Insertion Sort** for small or nearly sorted arrays.
- Use **Merge Sort** when a stable sort is needed and space is not a constraint.
- Use **Quick Sort** for large datasets where average performance is prioritized.
- Use **Bubble/Selection Sort** for learning and understanding sorting logic — not recommended for real use.


## 📁 Folder Contents

- `bubble_sort.cpp`
- `selection_sort.cpp`
- `insertion_sort.cpp`
- `merge_sort.cpp`
- `quick_sort.cpp`

Each file contains a clean C++ implementation of the corresponding sorting algorithm.

---

THANKYOU
If you find it helpful, give a ⭐ and feel free to contribute or connect!
