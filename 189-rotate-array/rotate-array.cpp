class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int i,n;
        n=nums.size();
        k=k%n;
        vector<int> temp;
        for(i=n-k ; i<n ;i++)
        {
            temp.push_back(nums[i]);
        }
        for(i=0;i<n-k;i++)
        {
            temp.push_back(nums[i]);
        }
        for(i=0;i<n;i++)    nums[i]=temp[i];
    }
};