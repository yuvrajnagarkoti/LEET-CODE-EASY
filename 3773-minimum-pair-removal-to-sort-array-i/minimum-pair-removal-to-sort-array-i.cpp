class Solution
{
public:
    int minimumPairRemoval(vector<int>& nums)
    {
        int i,k,count=0,n=nums.size();
        while ( !is_sorted(nums.begin(),nums.end()) )
        {
            int temp=-1;
            int minsum = INT_MAX;
            for(i=0 ; i<n-1; i++)
            {
                if(minsum  > (nums[i] + nums[i+1]) )
                {
                    minsum = nums[i]+nums[i+1];
                    temp = i;
                }
            }
            nums[temp]=minsum;
            for(k=temp+1 ; k<n-1 ; k++)
            {
                nums[k] = nums[k+1];
            }
            nums.pop_back();
            n--;
            count++;
        }
        return count;
    }
};