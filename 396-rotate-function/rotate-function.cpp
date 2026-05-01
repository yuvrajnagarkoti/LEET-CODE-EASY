class Solution {
public:
    int maxRotateFunction(vector<int>& nums)
    {
        int sum=0;
        int f=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum = sum + nums[i];
            f = f + i*nums[i];
        }    

        int result=f;
        for(int i=0;i<n;i++)
        {
            int newf = f + sum - n*(nums[n-1-i]);

            result = max(result,newf);
            f=newf;
        }
        return result;
    }
};