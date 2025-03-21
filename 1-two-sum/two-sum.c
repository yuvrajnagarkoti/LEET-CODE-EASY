int* twoSum(int* nums, int n, int target, int* returnSize)
{
    int i,j,flag=0;
    int * a = (int *)malloc(2*sizeof(int));
    *returnSize = 2;
    for(i=0;i<n;i++)
    {
        if(flag==1)
            break;
        for(j=0;j<n;j++)
        {
            if(nums[i]+nums[j] == target && i != j)
            {
                a[0]=i;
                a[1]=j;
                flag=1;
                break;
            }
        }
    }
    return a;
}