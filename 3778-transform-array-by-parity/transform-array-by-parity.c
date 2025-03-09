/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int n, int* returnSize)
{
    int c[2]={0};
    for(int i=0;i<n;i++)
    {
        if(nums[i]%2 == 0)
        {
            nums[i]=0;
            c[0]++;
        }
        else
        {
            nums[i]=1;
            c[1]++;
        }
    }
    int i=0;
    while(c[0]>0)
    {
        nums[i++]=0;
        c[0]--;
    }
    while(c[1]>0)
    {
        nums[i++]=1;
        c[1]--;
    }
    *returnSize=n;
    return nums;
}