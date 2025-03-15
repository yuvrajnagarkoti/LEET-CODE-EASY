int findFirstNonNegative(int* nums, int n)
{
    int low = 0, high = n - 1, index = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= 0) // Found non-negative
        { 
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return index;
}

int findFirstPositive(int* nums, int n)
{
    int low = 0, high = n - 1, index = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > 0) // Found positive
        {
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return index;
}

int maximumCount(int* nums, int n)
{
    int neg_count = findFirstNonNegative(nums, n); // Number of negative numbers
    int pos_count = n - findFirstPositive(nums, n); // Number of positive numbers
    return fmax(neg_count, pos_count);
}
