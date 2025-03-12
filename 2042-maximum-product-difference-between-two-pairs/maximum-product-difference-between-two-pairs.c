#include <stdio.h>

int maxProductDifference(int* nums, int numsSize) {
    int max1 = 0, max2 = 0, min1 = __INT_MAX__, min2 = __INT_MAX__;
    // Single pass to find the two largest and two smallest numbers
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }

        if (nums[i] < min1) {
            min2 = min1;
            min1 = nums[i];
        } else if (nums[i] < min2) {
            min2 = nums[i];
        }
    }
    return (max1 * max2) - (min1 * min2);
}