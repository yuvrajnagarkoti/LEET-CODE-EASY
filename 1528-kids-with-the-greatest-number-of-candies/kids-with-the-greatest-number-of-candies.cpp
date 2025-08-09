class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int extra)
    {
        vector<bool>ans;
        int max=*max_element(c.begin(),c.end());
        for(int i=0;i<c.size();i++)
        {
            if(c[i]+extra>=max)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};