class Solution
{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int,int> mpp;
        vector<int> res;
        for(int num:nums1)
        {
            mpp[num]++;
        }
        for(int num:nums2)
        {
            if(mpp[num]>0)
            {
                res.push_back(num);
                mpp[num]--;
            }
        }
        return res;
    }
};