int findMaxK(int* nums, int n)
{
    int i, max = 0;

    // Find max absolute value
    for(i = 0; i < n; i++)
    {
        if(abs(nums[i]) > max)
            max = abs(nums[i]);
    }

    // Allocate memory for tracking numbers
    int *a = (int *)calloc(max + 1, sizeof(int));

    // Mark presence of numbers
    for(i = 0; i < n; i++)
    {
        if(nums[i] > 0)
            a[nums[i]] |= 1;  // Mark positive
        else
            a[-nums[i]] |= 2;  // Mark negative
    }

    // Find the largest k where both k and -k exist
    for(i = max; i > 0; i--)
    {
        if(a[i] == 3)  // Both positive (1) and negative (2) exist
        {
            free(a);
            return i;
        }
    }

    free(a);
    return -1;
}
