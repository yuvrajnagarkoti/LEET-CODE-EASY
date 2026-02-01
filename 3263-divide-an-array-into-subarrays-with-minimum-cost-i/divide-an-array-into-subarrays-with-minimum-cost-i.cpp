class Solution {
public:
    int minimumCost(vector<int>& nums)
    {
        int sum = nums[0];
        int n1 = nums[1];
        int n2 = nums[2];
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i] < n1)
            {
                n2=n1;
                n1=nums[i];
            }
            else if(nums[i] < n2)
            {
                n2 = nums[i];
            }
        }
        return sum+n1+n2;
    }
};