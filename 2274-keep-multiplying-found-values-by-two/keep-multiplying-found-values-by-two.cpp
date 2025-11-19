class Solution {
public:
    int findFinalValue(vector<int>& nums, int original)
    {
        map <int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        while( mpp.find(original) != mpp.end())
        {
            if(mpp[original])
            {
                original = 2 * original;
            }
        }
        return original;
    }
};