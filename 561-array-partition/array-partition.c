int arrayPairSum(int* nums, int n) {
    int count[20001] = {0};  // To store the frequency of numbers (-10^4 to 10^4)
    
    // Map -10000 to 0 index and 10000 to 20000 index
    for (int i = 0; i < n; i++) 
        count[nums[i] + 10000]++;
    
    int sum = 0, pick = 1;  // `pick` ensures we pick alternate elements
    for (int i = 0; i < 20001; i++) {
        while (count[i]--) {  
            if (pick) sum += (i - 10000); // Convert back to original value
            pick = !pick;  // Flip between 1 and 0
        }
    }
    return sum;
}
