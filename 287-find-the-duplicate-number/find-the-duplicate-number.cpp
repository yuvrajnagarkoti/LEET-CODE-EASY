class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        map <int,int> mpp;
        int i,n=nums.size();
        for(i=0;i<n;i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]] == 2)
            {
                return nums[i];
            }
        }
        return 0;
    }
};