// Merge function for Merge Sort
void merge(int a[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int leftarr[n1], rightarr[n2];
    for (i = 0; i < n1; i++)
        leftarr[i] = a[low + i];
    for (j = 0; j < n2; j++)
        rightarr[j] = a[mid + 1 + j];
    i = j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
        if (leftarr[i] < rightarr[j])
            a[k++] = leftarr[i++];
        else
            a[k++] = rightarr[j++];
    }
    while (i < n1)
        a[k++] = leftarr[i++];
    while (j < n2)
        a[k++] = rightarr[j++];
}

// Merge Sort function
void mergesort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

// Function to count elements >= x using binary search
int countGreaterOrEqual(int *nums, int n, int x)
{
    int left = 0, right = n;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= x)
            right = mid;
        else
            left = mid + 1;
    }
    return n - left; // Count of numbers >= x
}

// Main function to find special number
int specialArray(int *nums, int n)
{
    mergesort(nums, 0, n - 1); // Sort array first
    int low = 0, high = n, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        int count = countGreaterOrEqual(nums, n, mid);
        if (count == mid)
        {
            return mid; // Found the special value
        }
        else if (count > mid)
        {
            low = mid + 1; // Need a higher value
        }
        else
        {
            high = mid - 1; // Need a lower value
        }
    }
    return -1; // No valid value found
}