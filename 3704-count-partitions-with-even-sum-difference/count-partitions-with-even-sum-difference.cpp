class Solution {
public:
    int countPartitions(vector<int>& nums)
    {
        int right=0;
        for(int i=0;i<nums.size();i++)
        {
            right=right+nums[i];
        }
        int count=0;
        int left=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            right=right-nums[i];
            left=left+nums[i];
            if(abs(left-right)%2 == 0)
                count++;
        }
        return count;
    }
};