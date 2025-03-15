void countsort(int a[],int n)
{
    int i,k;
    int *count=(int *)calloc(n+1,sizeof(int));
    for(i=0;i<n;i++)
        count[a[i]]++;
    i=0;
    k=0;
    while(i<n+1)
    {
        if(count[i]>0)
        {
            a[k++]=i;
        }
        i++;
    }
}

int missingNumber(int* nums, int n)
{
    countsort(nums,n);
    int low = 0, high = n - 1, mid;  
    while (low <= high) {
        mid = low + (high - low) / 2;
        // If index and value match, missing number is on the right
        if (nums[mid] == mid)
            low = mid + 1;
        else
            high = mid - 1;
    }
    // The missing number is at index 'low'
    return low;
}