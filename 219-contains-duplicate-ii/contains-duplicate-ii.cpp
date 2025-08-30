class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map<int,int> mpp;
        for(int i=0;i<=k && i<nums.size();i++)
        {
            if(mpp.count(nums[i]))
                return true;
            mpp[nums[i]]=1;
        }    
        int i=0,j=k+1;
        while( j < nums.size() )
        {
            mpp.erase(nums[i]);
            if(mpp.count(nums[j]))
                return true;
            
            mpp[nums[j]]=1;
            i++;
            j++;
        }
        return false;
    }
};