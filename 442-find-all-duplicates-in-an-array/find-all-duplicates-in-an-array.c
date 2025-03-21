int* findDuplicates(int* nums, int n, int* returnSize) {
    int *count = (int *)calloc(n + 1, sizeof(int)); // Allocate and initialize counting array
    int *arr = (int *)malloc(n * sizeof(int)); // Allocate memory for duplicates
    int k = 0;

    if (!count || !arr) {
        free(count);
        free(arr);
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] >= 1 && nums[i] <= n) {
            count[nums[i]]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (count[i] > 1) {
            arr[k++] = i;
        }
    }
    free(count); // Free the count array
    *returnSize = k;
    return arr;
}