int minimumOperations(int* nums, int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if( nums[i]%3 != 0)
        {
            count=count+1;
        }
    }
    return count;
}