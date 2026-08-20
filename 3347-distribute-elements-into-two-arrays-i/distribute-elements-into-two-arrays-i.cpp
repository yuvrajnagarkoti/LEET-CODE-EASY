class Solution {
public:
    vector<int> resultArray(vector<int>& nums)
    {
        vector<int> temp1,temp2;
        int n=nums.size();
        temp1.push_back(nums[0]);
        temp2.push_back(nums[1]);
        for(int i=2;i<n;i++)
        {
            if(temp1.back() > temp2.back())
                temp1.push_back(nums[i]);
            else
                temp2.push_back(nums[i]);
        }

        for(int i=0;i<temp2.size();i++)
        {
            temp1.push_back(temp2[i]);
        }
        return temp1;
    }
};