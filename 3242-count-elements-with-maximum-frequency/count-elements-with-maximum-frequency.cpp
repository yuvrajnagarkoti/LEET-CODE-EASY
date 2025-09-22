class Solution {
public:
    int maxFrequencyElements(vector<int>& nums)
    {
        int count[101] = {0};
        int maxf=0;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
            if(count[nums[i]] > maxf)
                maxf=count[nums[i]];
        }
        int ans=0;
        for(int i=1;i<101;i++)
        {
            if(count[i] == maxf)
            {
                ans=ans+count[i];
            }
        }
        return ans;
    }
};