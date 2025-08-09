class Solution {
public:
    int findMiddleIndex(vector<int>& nums)
    {
        int i,sum=0;
        for(i=0;i<nums.size();i++)
            sum+=nums[i];
        
        int psum=0;
        for(i=0;i<nums.size();i++)
        {
            if( psum == sum-nums[i]-psum)
            {
                return i;
            }
            psum+=nums[i];
        }
        return -1;
    }
};