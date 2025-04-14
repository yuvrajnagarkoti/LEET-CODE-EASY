class Solution
{
public:
    int digSum(int i){
        int rem = 0;
        while(i > 0)
        {
            rem += i%10;
            i/=10;
        }
        return rem;
    }
    int minElement(vector<int>& nums)
    {
        int mini = INT_MAX;
        for(auto& i : nums)
            mini = min(mini, digSum(i));
        return mini;
    }
};