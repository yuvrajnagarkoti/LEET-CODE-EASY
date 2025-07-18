class Solution {
public:
    int numIdenticalPairs(vector<int>& nums)
    {
        int i,j,n=nums.size();
        int count=0;
        map <int,int> mpp;
        for(i=0;i<nums.size();i++)
            mpp[nums[i]]++;
        
        for( auto it : mpp )
        {
            if( it.second > 1 )
                count = count+ ((it.second)*(it.second-1)/2);
        }
        return count;
    }
};