int longestNiceSubarray(int* nums, int n) {
    int left = 0, maxLength = 0;
    int bitMask = 0; // Tracks OR of the current subarray
    for (int right = 0; right < n; right++) {
        // If adding nums[right] violates the condition, shrink from left
        while ((bitMask & nums[right]) != 0) { 
            bitMask ^= nums[left]; // Remove nums[left] using XOR
            left++;
        }
        bitMask |= nums[right]; // Add nums[right] to the subarray
        maxLength = (right - left + 1) > maxLength ? (right - left + 1) : maxLength;
    }
    return maxLength;
}