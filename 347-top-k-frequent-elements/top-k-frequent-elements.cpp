class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        vector<int> ans;
        vector<pair<int,int>> count;
        for(auto it:mpp)
        {
            count.push_back({it.second,it.first});
        }
        sort(count.rbegin(),count.rend());
        int i=0;
        while(k--)
        {
            ans.push_back(count[i++].second);
        }

        return ans;
    }
};