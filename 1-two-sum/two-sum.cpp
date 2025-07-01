class Solution
{
public:

    static bool compare ( pair<int,int> &a, pair<int,int> &b)
    {
        return a.first < b.first;
    }

    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<pair<int,int>> num;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            num.push_back({nums[i],i});
        }

        sort(num.begin(),num.end(),compare);
        int low = 0,high=num.size()-1;

        while(low < high)
        {
            int temp = num[low].first + num[high].first;
            if(temp == target)
            {
                ans.push_back(num[low].second);
                ans.push_back(num[high].second);
                break;
            }
            else if(temp > target)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
        return ans;
    }
};