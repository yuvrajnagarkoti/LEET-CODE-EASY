class Solution {
public:
    int minMoves(vector<int>& nums)
    {
        int mine=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            mine = min(mine,nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans += (nums[i]-mine);
        }

        return ans;
    }
};