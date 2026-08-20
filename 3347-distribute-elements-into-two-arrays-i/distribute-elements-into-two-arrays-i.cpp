class Solution {
public:
    vector<int> resultArray(vector<int>& nums)
    {
        vector<int> temp1;
        int n=nums.size();
        temp1.push_back(nums[0]);
        temp1.push_back(nums[1]);
        int k=1;
        for(int i=2;i<n;i++)
        {
            if(temp1[k-1] > temp1.back())
            {
                temp1.insert(temp1.begin()+k,nums[i]);
                k++;
            }
            else
                temp1.push_back(nums[i]);
        }
        return temp1;
    }
};