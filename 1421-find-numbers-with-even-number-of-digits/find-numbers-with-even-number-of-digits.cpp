class Solution
{
public:
    int findNumbers(vector<int>& nums)
    {
        int c=0;
        for(auto n : nums)
        {
            int temp = n;
            int count = 0;
            while(temp > 0)
            {
                count++;
                temp=temp/10;
            }
            if(count%2 == 0)
                c++;
        }
        return c;
    }
};