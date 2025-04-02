class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int i,k=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                nums[k++]=nums[i];
            }
        }
        while(k<nums.size())
        {
            nums[k++]=0;
        }
    }
};