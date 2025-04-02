class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int i,k=0,n=nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i] != 0)
            {
                nums[k++]=nums[i];
            }
        }
        while(k<n)
        {
            nums[k++]=0;
        }
    }
};