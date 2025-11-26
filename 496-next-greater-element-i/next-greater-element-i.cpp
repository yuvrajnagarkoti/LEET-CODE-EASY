class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            int j=find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            bool found=false;
            for(int k=j;k<nums2.size();k++)
            {
                if(nums1[i] < nums2[k])
                {
                    found=true;
                    ans.push_back(nums2[k]);
                    break;
                }
            }
            if(!found)
                ans.push_back(-1);
        }
        return ans;
    }
};