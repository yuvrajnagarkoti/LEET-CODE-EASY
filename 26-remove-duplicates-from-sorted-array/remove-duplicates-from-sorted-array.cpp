class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int low=0,high=1;
        int n=nums.size();
        while(high < n)
        {
            if(nums[low] != nums[high])
            {
                low++;
                nums[low] = nums[high];
            }
            high++;
        }
        return low+1;
    }
};