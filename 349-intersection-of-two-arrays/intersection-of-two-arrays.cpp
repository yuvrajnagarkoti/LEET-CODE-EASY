class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i,l1=0,l2=0;
        vector<int> ans;
        while( l1<nums1.size() && l2<nums2.size() )
        {
            if(nums1[l1] == nums2[l2])
            {
                ans.push_back(nums1[l1++]);
                while(l1<nums1.size() && nums1[l1] == nums1[l1-1] )
                    l1++;
            }
            else if( nums1[l1] > nums2[l2])
                l2++;
            else
                l1++;
        }
        return ans;
    }
};