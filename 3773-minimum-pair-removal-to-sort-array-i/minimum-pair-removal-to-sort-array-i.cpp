class Solution {
public:
    int minimumPairRemoval(vector<int>& nums)
    {
        int ans = 0;

        while(!is_sorted(nums.begin(), nums.end()))
        {
            int sum = nums[0] + nums[1];
            int pointer = 1;

            for(int i = 2; i < nums.size(); i++)
            {
                int s = nums[i] + nums[i-1];
                if(sum > s)
                {
                    sum = s;
                    pointer = i;
                }
            }
            nums[pointer-1]=sum;
            nums.erase(nums.begin() + pointer);
            ans++;
        }
        return ans;
    }
};
