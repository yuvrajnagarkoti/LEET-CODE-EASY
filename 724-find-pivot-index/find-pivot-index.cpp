class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int i,n=nums.size();
        vector<int> left(n+1,0);
        vector<int> right(n+1,0);
        for(i=0;i<n;i++)
        {
            left[i+1] = left[i]+nums[i];
        }
        for(i=n-1;i>=0;i--)
        {
            right[i] = right[i+1]+nums[i];
        }
        for(i=0;i<n;i++)
        {
            if(left[i] == right[i+1])
                return i;
        }
        return -1;
    }
};