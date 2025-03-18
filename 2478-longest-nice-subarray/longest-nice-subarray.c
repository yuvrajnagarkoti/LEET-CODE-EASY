int longestNiceSubarray(int* nums, int n) {
    int left = 0, maxLength = 0, bitMask = 0;
    for (int right = 0; right < n; right++)
    {
        while ((bitMask & nums[right]) != 0) // If there's a conflict
        { 
            bitMask ^= nums[left]; // Remove nums[left] from bitMask
            left++;
        }
        bitMask |= nums[right]; // Add nums[right] to bitMask
        if (right - left + 1 > maxLength) // Update maxLength
        {
            maxLength = right - left + 1;
        }
    }
    return maxLength;
}
