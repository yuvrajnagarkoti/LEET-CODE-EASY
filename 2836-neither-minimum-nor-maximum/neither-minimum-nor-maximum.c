int findNonMinOrMax(int* nums, int n)
{
    if(n>2)
    {
        int min=nums[0],max=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i] < min)
            {
                min=nums[i];
            }
            if(nums[i] > max)
            {
                max=nums[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=min && nums[i]!= max)
            {
                return nums[i];
            }
        }
    }
    return -1;
}