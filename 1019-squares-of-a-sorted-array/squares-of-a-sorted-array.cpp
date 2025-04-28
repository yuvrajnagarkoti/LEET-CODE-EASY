class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int l=0,h=nums.size()-1;
        vector <int> v;
        while( l <= h)
        {
            if(nums[l]*nums[l] < nums[h]*nums[h])
            {
                v.insert(v.begin(), nums[h]*nums[h]);
                h--;
            }
            else
            {
                v.insert(v.begin(), nums[l]*nums[l]);
                l++;
            }
        }
        return v;
    }
};