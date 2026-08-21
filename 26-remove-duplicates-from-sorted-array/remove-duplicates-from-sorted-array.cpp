class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int k=0;
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]) == st.end())
            {
                st.insert(nums[i]);
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};