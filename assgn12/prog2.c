//Quick Sort
/*
It is an divide and conquer algorithm
*/
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

/*
QuickSort is a divide-and-conquer algorithm. It works by selecting a "pivot" element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The pivot is then in its final position and the sub-arrays are sorted recursively.

The basic steps of the algorithm are:

Select a pivot element from the array. This element is used to partition the array into two sub-arrays.

Reorder the elements in the array so that all elements less than the pivot come before all elements greater than the pivot. This step is known as partitioning.

Recursively sort the sub-array of elements less than the pivot and the sub-array of elements greater than the pivot.

The pivot element is now in its final position and the array is completely sorted.

The partitioning step is crucial to the performance of the algorithm, as it determines the balance of the sub-arrays and thus the number of recursive calls needed. The algorithm is efficient when the pivot is chosen so that the sub-arrays are roughly equal in size.

QuickSort is an efficient, in-place sorting algorithm with an average time complexity of O(n log n). However, its worst-case time complexity is O(n^2) if the pivot is chosen poorly and the array is already sorted or nearly sorted. To avoid this, one can choose pivot randomly or use a modified version of quicksort like "Ternary Quicksort" which has a worst case time complexity of O(n log n)
*/