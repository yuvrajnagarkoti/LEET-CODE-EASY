class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> count(101,0);
        for(auto num : nums)
        {
            count[num]++;
        }
        vector<int> ans;
        for(auto num : nums)
        {
            int c=0;
            for(int i=0;i<num;i++)
            {
                c+=count[i];
            }
            ans.push_back(c);
        }
        return ans;
    }
};