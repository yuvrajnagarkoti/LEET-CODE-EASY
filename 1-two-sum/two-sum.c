int* twoSum(int* nums, int n, int target, int* returnSize)
{
    int i,j;
    int * a = (int *)malloc(2*sizeof(int));
    *returnSize = 2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(nums[i]+nums[j] == target && i != j)
            {
                a[0]=i;
                a[1]=j;
                break;
            }
        }
    }
    return a;
}