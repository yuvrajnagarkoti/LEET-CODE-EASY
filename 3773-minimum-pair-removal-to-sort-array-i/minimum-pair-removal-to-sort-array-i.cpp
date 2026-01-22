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

            nums[pointer] = sum;
            nums[pointer - 1] = 0;

            vector<int> temp;
            for(int i = 0; i < pointer - 1; i++)
                temp.push_back(nums[i]);

            for(int i = pointer; i < nums.size(); i++)
                temp.push_back(nums[i]);

            nums = temp;
            ans++;
        }
        return ans;
    }
};
