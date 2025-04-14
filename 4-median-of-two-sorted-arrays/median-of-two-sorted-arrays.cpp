class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int i=0,j=0;
        vector <int> nums3;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i] < nums2[j])
                nums3.push_back(nums1[i++]);
            else
                nums3.push_back(nums2[j++]);
        }
        while(i<nums1.size())
            nums3.push_back(nums1[i++]);
        while(j<nums2.size())
            nums3.push_back(nums2[j++]);
        if(nums3.size()%2 != 0) return (double)nums3[nums3.size()/2];
        else
            i=nums3.size()/2;
        return (double)(nums3[i]+nums3[i-1]) /2;
    }
};