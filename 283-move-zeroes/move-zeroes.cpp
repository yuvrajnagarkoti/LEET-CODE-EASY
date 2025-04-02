class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int i,k=0,n=nums.size();
        vector<int> a(n,0);
        for(i=0;i<n;i++)
        {
            if(nums[i] != 0)
            {
                a[k++]=nums[i];
            }
        }
        for(i=0;i<n;i++)
            nums[i]=a[i];
    }
};