class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> temp(nums.begin(),nums.end());
        sort(temp.begin(),temp.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int j=find(temp.begin(),temp.end(),nums[i])-temp.begin();
            ans.push_back(j);
        }
        return ans;
    }
};