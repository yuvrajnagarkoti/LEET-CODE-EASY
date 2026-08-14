class Solution {
public:
    int countPartitions(vector<int>& nums)
    {
        int n=nums.size();
        int total=0;
        for(int i=n-1;i>=0;i--)
        {
            total += nums[i];
        }

        int temp=0;
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            temp += nums[i];
            total -= nums[i];
            if( (temp-total) %2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};