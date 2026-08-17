class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int n=nums.size(),temp=0;
        vector<int> post(n,0);
        for(int i=n-1;i>=0;i--)
        {
            post[i] = temp;
            temp += nums[i];
        }
        temp=0;
        for(int i=0;i<n;i++)
        {
            if(temp == post[i])
                return i;
            temp += nums[i];
        }
        return -1;
    }
};