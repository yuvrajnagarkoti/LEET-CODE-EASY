class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int,int> mpp;
        vector<int> ans(nums1.size(),0);
        for(int i=0;i<nums2.size();i++)
        {
            for(int j=i+1;j<nums2.size();j++)
            {
                if(nums2[j] > nums2[i])
                {
                    mpp[nums2[i]] = nums2[j];
                    break;
                }
            }
            if(mpp.find(nums2[i]) == mpp.end())
            {
                mpp[nums2[i]]=-1;
            }
        }

        for(int i=0;i<nums1.size();i++)
        {
            ans[i] = mpp[nums1[i]];
        }

        return ans;
    }
};