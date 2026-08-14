class Solution {
public:
    int countPartitions(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> postfix(n,0);
        int temp=0;
        for(int i=n-1;i>=0;i--)
        {
            temp += nums[i];
            postfix[i]= temp;
        }

        temp=0;
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            temp += nums[i];
            if((temp-postfix[i+1])%2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};