#include <stdio.h>
#include <stdbool.h>

bool divideArray(int* nums, int n) 
{
    if (n % 2 != 0) return false;  // Odd-length array can't be divided into pairs
    int count[501] = {0};  // Fixed array for numbers 1 to 500
    for (int i = 0; i < n; i++)
    {
        count[nums[i]]++;  // Count occurrences
    }
    for (int i = 1; i <= 500; i++)
    {  
        if (count[i] % 2 != 0) return false;  // If any number appears odd times, return false
    }
    return true;
}