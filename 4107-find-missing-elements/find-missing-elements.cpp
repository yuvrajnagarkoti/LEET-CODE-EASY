class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums)
    {
        vector<int> ans;
        int low=INT_MAX,high=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > high)
                high = nums[i];
            if(nums[i] < low)
                low = nums[i];
        }
        vector<int> temp(high-low+1,0);
        for(int i=0;i<nums.size();i++)
        {
            temp[nums[i]-low]=1;
        }

        for(int i=0;i<temp.size();i++)
        {
            if(temp[i] == 0)
                ans.push_back(i+low);
        }
        return ans;
    }
};