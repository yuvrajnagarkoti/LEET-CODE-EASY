#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to find the maximum value in the array
int findMax(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Count Sort function
void countSort(int arr[], int n) {
    int max = findMax(arr, n);  // Find max value in array
    int count[max + 1];         // Create a count array
    int output[n];              // Output sorted array

    // Initialize count array with 0
    for (int i = 0; i <= max; i++)
        count[i] = 0;

    // Store count of occurrences
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // Update count array to store the position of elements
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];

    // Build output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy sorted elements back to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Function to compute minimum moves
int minMovesToSeat(int* seats, int n1, int* students, int n2) {
    int minMoves = 0;
    // Sorting both arrays using Count Sort (O(n + k))
    countSort(seats, n1);
    countSort(students, n2);

    // Calculate minimum moves
    for (int i = 0; i < n1; i++) {
        minMoves += abs(seats[i] - students[i]);
    }
    return minMoves;
}
