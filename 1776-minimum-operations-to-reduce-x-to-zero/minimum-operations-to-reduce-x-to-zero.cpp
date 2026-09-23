class Solution {
public:
    int minOperations(vector<int>& nums, int x)
    {
        int sum=0,n=nums.size();
        unordered_map<int,int> mpp;
        int ans=INT_MAX;

        // Store suffix sum -> starting index
        for(int i=n-1;i>=0;i--)
        {
            sum += nums[i];
            mpp[sum]=i;

            if(sum == x)
                ans=min(ans,n-i);
        }

        sum=0;

        for(int i=0;i<n;i++)
        {
            sum += nums[i];

            if(sum == x)
                ans=min(ans,i+1);

            int temp=x-sum;

            if(mpp.find(temp) != mpp.end())
            {
                int idx=mpp[temp];

                // suffix must start after prefix
                if(idx > i)
                {
                    int t1=n-idx;
                    ans=min(ans,t1+i+1);
                }
            }
        }

        if(ans == INT_MAX)
            return -1;

        return ans;
    }
};