class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map<int,int> mpp;
        for(int i=0;i<=k && i<nums.size();i++)
        {
            if(mpp.find(nums[i]) == mpp.end())
                mpp[nums[i]]++;
            else
                return true;
        }
        int i=0,j=k+1;
        while( j < nums.size() )
        {
            mpp.erase(nums[i]);
            if(mpp.find(nums[j]) == mpp.end())
                mpp[nums[j]]++;
            else
                return true;
            i++;
            j++;
        }
        return false;
    }
};