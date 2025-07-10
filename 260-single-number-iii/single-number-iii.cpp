class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int i,c=0;
        for(i=0;i<nums.size();i++)
        {
            if( i+1 < nums.size() && nums[i] == nums[i+1])
            {
                i++;
            }
            else
            {
                c++;
                ans.push_back(nums[i]);
                if(c==2)    break;
            }
        }
        return ans;
    }
};