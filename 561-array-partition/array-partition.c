#include <stdio.h>
#include <stdlib.h>  // For malloc and free

void merge(int a[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Use dynamic memory allocation instead of VLAs
    int *leftarr = (int *)malloc(n1 * sizeof(int));
    int *rightarr = (int *)malloc(n2 * sizeof(int));

    for (i = 0; i < n1; i++)
        leftarr[i] = a[low + i];
    for (j = 0; j < n2; j++)
        rightarr[j] = a[mid + j + 1];

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

    // Free dynamically allocated memory
    free(leftarr);
    free(rightarr);
}

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

int arrayPairSum(int *nums, int n)
{
    mergesort(nums, 0, n - 1);
    int i, sum = 0;
    for (i = 0; i < n; i += 2)
    {
        sum += nums[i]; // Sum every alternate element
    }
    return sum;
}
