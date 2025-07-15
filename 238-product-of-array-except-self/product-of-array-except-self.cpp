class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int zeroc=0,flag=0;
        int i,n=nums.size();
        long long mul = 1;
        for(i=0;i<n;i++)
        {
            if(nums[i] == 0 && zeroc == 0)
            {
                zeroc = 1;
                continue;
            }
            else
            {
                if(nums[i] == 0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    mul = mul * nums[i];
                }
            }
        }
        if(flag != 1)
        {
            for(i=0;i<n;i++)
            {
                if( zeroc == 1 && nums[i] != 0)
                    nums[i] = 0;
                else if( zeroc == 1 && nums[i] == 0)
                    nums[i] = mul;
                else
                    nums[i] = mul / nums[i];
            }
        }
        else
        {
            for(i=0;i<n;i++)
                nums[i] = 0;
        }
        return nums;
    }
};