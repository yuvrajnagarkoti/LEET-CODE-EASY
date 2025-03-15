// Merge function for Merge Sort
void merge(int a[], int low, int mid, int high) {
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

    while (i < n1 && j < n2) {
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
void mergesort(int a[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

// Binary search to find the maximum index where sum <= query
int binarySearch(int* prefixSum, int n, int query) {
    int low = 0, high = n - 1, ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (prefixSum[mid] <= query) {
            ans = mid + 1; // Include this index (count starts from 1)
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* answerQueries(int* nums, int n, int* queries, int m, int* returnSize) {
    mergesort(nums, 0, n - 1); // Sort array first

    // Compute prefix sum
    int* prefixSum = (int*)malloc(n * sizeof(int));
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }

    // Process each query using binary search
    int* answer = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        answer[i] = binarySearch(prefixSum, n, queries[i]);
    }

    free(prefixSum); // Free memory after use
    *returnSize = m;
    return answer;
}