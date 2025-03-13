int findNonMinOrMax(int* nums, int n)
{
    // If the array has less than 3 elements, return -1 since there's no valid middle element.
    if(n > 2)
    {
        int min = nums[0], max = nums[0]; // Initialize min and max with the first element.
        // Find the minimum and maximum elements in the array.
        for(int i = 1; i < n; i++)
        {
            if(nums[i] < min)
            {
                min = nums[i]; // Update min if a smaller element is found.
            }
            if(nums[i] > max)
            {
                max = nums[i]; // Update max if a larger element is found.
            }
        }
        // Find and return any element that is neither the min nor the max.
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != min && nums[i] != max)
            {
                return nums[i]; // Return the first non-minimum and non-maximum element found.
            }
        }
    }
    return -1; // If no such element is found, return -1.
}
