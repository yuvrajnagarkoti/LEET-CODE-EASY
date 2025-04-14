class Solution{
public:
    int minElement(vector<int>& nums)
    {
        int i,min=INT_MAX,t1;
        for(i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            t1=0;
            while(temp)
            {
                t1= t1 + temp%10;
                temp=temp/10;
            }
            if(t1 < min)
                min=t1;
        }
        return min;
    }
};