class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums)
    {
        int pos = 0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            pos = pos + nums[i];
            if(pos == 0)
                count++;
        }
        return count;   
    }
};