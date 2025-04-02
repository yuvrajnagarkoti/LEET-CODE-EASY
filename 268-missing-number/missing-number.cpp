class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        int i,n;
        n=nums.size();
        vector<int> count(n+1,0);
        for(i=0;i<n;i++)
        {
            count[nums[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(count[i] == 0)
            {
                break;
            }
        }
        return i;
    }
};