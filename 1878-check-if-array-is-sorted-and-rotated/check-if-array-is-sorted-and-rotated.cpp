class Solution {
public:
    bool check(vector<int>& nums)
    {
        int i,k,c,a[nums.size()],flag=0;
        for(k=0;k<nums.size()-1;k++)
        {
            if(nums[k]>nums[k+1])
            {
                flag=1;
                k++;
                break;
            }
        }
        if(flag==0) return true;
        c=0;
        for(i=k ; i<nums.size();i++)
        {
            a[c++]=nums[i];
        }
        for(i=0 ; i<k ; i++)
        {
            a[c++]=nums[i];
        }
        for(i=0;i<nums.size()-1;i++)
        {
            if(a[i] > a[i+1])
            {
                return false;
            }
        }
        return true;
    }
};