# Sorting Algorithms: An Overview

Sorting is a fundamental operation in computer science, with a variety of applications in algorithms and data processing. Sorting algorithms are methods used to organize the elements of a list or set of data in a specific order.

## Goal

The main objective of sorting algorithms is to rearrange the elements of a list of data in a desired order, be it ascending or descending. The ability to sort data is essential in many applications, such as efficient searching, comparing records, and facilitating data analysis.

## Complexity in Best, Average and Worst Case

The efficiency of a sorting algorithm is often measured by its best-, average-, and worst-case complexity. These analyzes provide insights into how the algorithm performs in different scenarios.

### Bubble Sort

- **Description:** Bubble Sort repeatedly goes through the list, compares adjacent elements and swaps them if they are in the wrong order.
  
- **Complexity:**
   - Best Case: O(n) - when the list is already ordered.
   - Average Case: O(n^2) - on average, for unordered lists.
   - Worst Case: O(n^2) - when the list is ordered inversely.

### Selection Sort

- **Description:** Selection Sort divides the list into two parts: one ordered and the other unordered. It finds the smallest element from the unordered part and moves it to the ordered part.
  
- **Complexity:**
   - Best Case: O(n^2) - always.
   - Medium Case: O(n^2) - always.
   - Worst Case: O(n^2) - always.

### Insertion Sort

- **Description:** Insertion Sort builds an ordered sequence of elements one at a time. It takes an element from the list and compares it with the already sorted elements, moving them to the right until it finds the correct position.
  
- **Complexity:**
   - Best Case: O(n) - when the list is already ordered.
   - Average Case: O(n^2) - on average, for unordered lists.
   - Worst Case: O(n^2) - when the list is ordered inversely.

### Merge Sort

- **Description:** Merge Sort is a divide-and-conquer sorting algorithm that divides the list into two halves, sorts each half, and then combines the sorted halves.
  
- **Complexity:**
   - Best Case: O(n log n) - always.
   - Medium Case: O(n log n) - always.
   - Worst Case: O(n log n) - always.

### Quick Sort

- **Description:** Quick Sort is also a divide and conquer algorithm. It selects an element (pivot) and partitions the list into two subsets, elements smaller than the pivot and those larger than the pivot. Then repeat the process for the subsets.
  
- **Complexity:**
   - Best Case: O(n log n) - when the pivot divides the list into two almost equal parts.
   - Average Case: O(n log n) - on average.
   - Worst Case: O(n^2) - when the list is already ordered.

### Heap Sort

- **Description:** Heap Sort uses a data structure called heap to organize elements. It creates a maximum (or minimum) heap, where the largest (or smallest) element is at the root. It then repeatedly extracts the main element, rebuilds the heap, and repeats the process.

- **Complexity:**
   - Best Case: O(n log n) - always.
   - Medium Case: O(n log n) - always.
   - Worst Case: O(n log n) - always.
     
### Binary Search

- **Description:**
Binary Search is an efficient algorithm for finding an element in an ordered list. It compares the target element with the element in the middle of the list and reduces the search to one half of the list.

- **Complexity:**
  - Best Case: O(1) - when the target element is in the middle of the list.
  - Medium Case: O(log n) - on average.
  - Worst Case: O(log n) - always.
