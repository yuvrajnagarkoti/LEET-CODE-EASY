class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        int i;
        unordered_map<int,int> mpp;
        for(i=0;i<nums.size();i++)
        {
            if( mpp.find(nums[i]) != mpp.end() )
            {
                return true;
            }
            mpp[nums[i]]++;
        }
        return false;
    }
};