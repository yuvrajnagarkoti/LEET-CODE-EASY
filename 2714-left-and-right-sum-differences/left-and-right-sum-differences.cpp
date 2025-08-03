class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums)
    {
        int i,n=nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        int sum=0;
        for(i=0;i<n;i++)
        {
            left[i]=sum;
            sum=sum+nums[i];
        }
        sum=0;
        for(i=n-1;i>=0;i--)
        {
            right[i]=sum;
            sum=sum+nums[i];
        }
        for(i=0;i<n;i++)
        {
            right[i] = abs(left[i]-right[i]);
        }
        return right;
    }
};