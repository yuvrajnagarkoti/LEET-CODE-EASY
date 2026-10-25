class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> ans(n,0);
        int i=0,j=n-1;
        n=n-1;
        while(i<=j)
        {
            if(nums[i]*nums[i] > nums[j]*nums[j])
            {
                ans[n--] = nums[i]*nums[i];
                i++;
            }
            else
            {
                ans[n--] = nums[j]*nums[j];
                j--;
            }
        }

        return ans;
    }
};