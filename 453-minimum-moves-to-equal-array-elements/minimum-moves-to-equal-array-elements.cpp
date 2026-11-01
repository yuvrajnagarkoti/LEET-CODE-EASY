class Solution {
public:
    int minMoves(vector<int>& nums)
    {
        int mine=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            mine = min(mine,nums[i]);
            sum += nums[i];
        }

        return sum-(mine*nums.size());
    }
};