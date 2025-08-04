class Solution
{
public:
    double minimumAverage(vector<int>& nums)
    {
        int low=0,high=nums.size()-1;
        double ans=DBL_MAX;
        sort(nums.begin(),nums.end());
        while( low<=high )
        {
            double temp = (nums[low++]+nums[high--])/2.0;
            ans = min(ans,temp);
        }
        return ans;
    }
};