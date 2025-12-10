class Solution {
public:
    int alternatingSum(vector<int>& nums)
    {
        int sum=0;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(flag==0)
            {
                sum=sum+nums[i];
                flag=1;
            }
            else
            {
                sum=sum-nums[i];
                flag=0;
            }    
        }
        return sum;
    }
};