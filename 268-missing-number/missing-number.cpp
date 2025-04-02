class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        int n = nums.size();
        int sum = n*(n+1);
        sum = sum/2;
        int s_sum = 0;
        for(int i=0;i<n;i++)
        {
            s_sum += nums[i];
        }
        return sum - s_sum;
    }
};