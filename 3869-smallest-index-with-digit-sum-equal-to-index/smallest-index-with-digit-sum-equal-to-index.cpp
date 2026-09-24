class Solution
{
    public:

    bool check(int i,int t)
    {
        int sum=0;
        while(t>0)
        {
            int temp = t%10;
            t=t/10;
            sum += temp;
        }
        if(sum == i)
            return true;
        
        return false;
    }
    int smallestIndex(vector<int>& nums)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(check(i,nums[i]))
            {
                return i;
            }
        }
        return -1;
    }
};