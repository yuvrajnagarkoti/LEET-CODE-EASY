class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int zero=0;
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
                zero++;
            else
            {
                nums[k] = nums[i];
                k++;
            }
        }
        while(zero)
        {
            nums[n-zero] = 0;
            zero--;
        }
    }
};