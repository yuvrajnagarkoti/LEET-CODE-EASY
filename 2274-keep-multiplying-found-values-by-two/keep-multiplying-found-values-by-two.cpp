class Solution {
public:
    int findFinalValue(vector<int>& nums, int original)
    {
        while(true)
        {
            int flag=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i] == original)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                original=original*2;
            else
                break;
        }
        return original;
    }
};