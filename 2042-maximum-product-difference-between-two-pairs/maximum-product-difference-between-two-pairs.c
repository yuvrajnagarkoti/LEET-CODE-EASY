int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maxProductDifference(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compare);
    int max1 = nums[numsSize - 1];
    int max2 = nums[numsSize - 2];
    int min1 = nums[0];
    int min2 = nums[1];
    
    return (max1 * max2) - (min1 * min2);
}
