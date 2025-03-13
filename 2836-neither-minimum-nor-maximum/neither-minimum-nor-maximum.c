int findNonMinOrMax(int* nums, int n) {
    if (n < 3) return -1; // If less than 3 elements, return -1

    // Find min, max, and a middle element in just 3 checks
    int a = nums[0], b = nums[1], c = nums[2];

    if ((a > b && a < c) || (a < b && a > c)) return a;
    if ((b > a && b < c) || (b < a && b > c)) return b;
    return c; // The remaining element is neither min nor max
}
