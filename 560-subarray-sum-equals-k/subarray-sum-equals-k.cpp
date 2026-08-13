class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int presum = 0,count=0;;
        for(int i=0;i<nums.size();i++)
        {
            presum += nums[i];
            if(mpp.find(presum-k) != mpp.end())
            {
                count = count + mpp[presum-k];
            }
            mpp[presum]++;
        }
        return count;
    }
};