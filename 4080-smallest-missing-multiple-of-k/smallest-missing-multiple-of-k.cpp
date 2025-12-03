class Solution {
public:
    int missingMultiple(vector<int>& nums, int k)
    {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]=1;
        }
        int i=1;
        int temp=k;
        while(mpp.find(temp) != mpp.end())
        {
            i++;
            temp=k*i;
        }
        return temp;
    }
};