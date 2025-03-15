int missingNumber(int* nums, int n)
{
    int i,j,flag;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(nums[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
        {
            return i;
        }
    }
    return i;
}