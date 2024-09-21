# Learning-algorithm

This project contains implementations of various algorithms as part of my lab practice. The focus is on sorting algorithms, dynamic programming, greedy algorithms, and more advanced topics like Huffman Coding and Minimum Spanning Trees (MST).

## Lab Practice Topics

1. **Dynamic Programming**: Practice problems involving dynamic programming techniques for optimization.
2. **Greedy Algorithm**: Solutions using greedy techniques to achieve optimal or near-optimal results.
3. **Huffman Coding**: Implementation of Huffman coding, an optimal greedy algorithm for lossless data compression.
4. **Merge Sort**: A divide-and-conquer sorting algorithm with O(n log n) time complexity.
5. **Quick Sort**: An efficient, in-place sorting algorithm with an average time complexity of O(n log n).
6. **MST (Minimum Spanning Tree)**: Implementation of MST algorithms like Kruskal's and Prim's algorithms.
7. **Rock Climbing**: A problem-solving practice that involves dynamic programming and other algorithmic approaches.

## Counting Sort Implementation in C

This section includes the C implementation of **Counting Sort**, which is used for sorting non-negative integers efficiently when the range of the input values is known and manageable.

### Code Explanation

The counting sort algorithm works by:
1. Finding the maximum element in the array.
2. Creating a count array that stores the frequency of each element.
3. Reconstructing the sorted array using the count array.

### Code

```c
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printArray(int* A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int A[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (max < A[i]){
            max = A[i];
        }
    }
    return max;
}

void countSort(int* A, int n) {
    int i, j;
    int max = maximum(A, n);

    int* count = (int *) malloc((max+1)*sizeof(int));

    for (i = 0; i < max+1; i++) {
        count[i] = 0;
    }

    for (i = 0; i < n; i++) {
        count[A[i]] = count[A[i]] + 1;
    }

    i = 0;
    j = 0;

    while(i <= max) {
        if(count[i] > 0) {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        } else {
            i++;
        }
    }
}

int main() {
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    countSort(A, n);
    printArray(A, n);
    return 0;
}
