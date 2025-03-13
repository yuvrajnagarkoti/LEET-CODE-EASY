#include <stdbool.h>

void merge(int a[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int leftarr[n1], rightarr[n2];

    for (i = 0; i < n1; i++)
        leftarr[i] = a[low + i];
    for (j = 0; j < n2; j++)
        rightarr[j] = a[mid + 1 + j]; // ✅ Corrected indexing

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

bool canBeEqual(int *target, int n1, int *arr, int n2)
{
    if (n1 != n2) return false;  // ✅ Extra safety check for array sizes

    mergesort(target, 0, n1 - 1);
    mergesort(arr, 0, n2 - 1);

    for (int i = 0; i < n1; i++)
    {
        if (target[i] != arr[i])
        {
            return false;  // ✅ Using `false` instead of `0`
        }
    }
    return true;  // ✅ Using `true` instead of `1`
}