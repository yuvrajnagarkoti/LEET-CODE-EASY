int* twoSum(int* nums, int n, int target, int* returnSize)
{
    int i,j,flag=0;
    int * a = (int *)malloc(2*sizeof(int));
    *returnSize = 2;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j] == target)
            {
                a[0]=i;
                a[1]=j;
                return a;
            }
        }
    }
    return a;
}