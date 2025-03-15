int maximumCount(int* nums, int n)
{
    int i=0,c1=0,c2=0;
    while(i<n)
    {
        if(nums[i]<0)
        {
            c1++;
        }
        else
            break;
        i++;
    }
    while(i<n)
    {
        if(nums[i]==0)
        {
            i++;
        }
        else
        {
            c2++;
            i++;
        }
    }
    return fmax(c1,c2);
}