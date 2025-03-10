int maxProduct(int* nums, int n)
{
    int n1 = 0, n2 = 0; // Store two largest numbers
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > n1)
        {
            n2 = n1; // Previous max becomes second max
            n1 = nums[i]; // Update max
        }
        else if (nums[i] > n2)
        {
            n2 = nums[i]; // Update second max
        }
    }
    return (n1 - 1) * (n2 - 1);
}