class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        unordered_map<int, int> count;
        for (int num : nums) count[num]++;
        vector<int> ans;
        for (auto& p : count)
        {
            if (p.second == 1) ans.push_back(p.first);
        }
        return ans;
    }
};