# Problem 1 – Find First and Last Position of Element in Sorted Array  

## Approach
This problem is solved using Binary Search twice:

1. First Search → find the first (leftmost) occurrence of the target value.  
2. Second Search → find the last (rightmost) occurrence of the same target value.  

Each binary search halves the search space every step, so the runtime is **O(log n)**.  
We only use a few variables (no extra data structures), giving **O(1)** space complexity.  

In short:
> Perform two binary searches — one to find the start index, and one to find the end index of the target value.

## Complexity
- **Time Complexity:** O(log n)  
- **Space Complexity:** O(1)
