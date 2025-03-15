int missingNumber(int* nums, int n)
{
    int i,flag;
    int * a =(int *)calloc(n+1,sizeof(int));
    for(i=0;i<n;i++)
        a[nums[i]]++;
    for(i=0;i<n;i++)
    {
        if(a[i] == 0)
        {
            flag=i;
            break;
        }
    }
    return flag;
}