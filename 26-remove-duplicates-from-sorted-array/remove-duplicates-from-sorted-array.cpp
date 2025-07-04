class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int i=0,j=1,n=nums.size(),c=0;
        for(i=0;i<n-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                for(j=i+1;j<n-1;j++)
                {
                    nums[j]=nums[j+1];
                }
                i--;
                n--;
            }
        }
        return n;
    }
};