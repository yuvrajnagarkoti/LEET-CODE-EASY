int minimumOperations(int* nums, int n)
{
    int r,count=0;
    for(int i=0;i<n;i++)
    {
        r=nums[i]%3;
        if( r != 0)
        {
            count=count+1;
        }
    }
    return count;
}