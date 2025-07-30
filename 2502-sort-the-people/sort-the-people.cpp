class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights)
    {
        int i,j,n=names.size();
        vector<string> ans;
        for(i=0;i<n;i++)
        {
            int mmax=heights[i];
            int c=i;
            for(j=0;j<n;j++)
            {
                if(heights[j] > mmax)
                {
                    mmax=heights[j];
                    c=j;
                }
            }
            ans.push_back(names[c]);
            heights[c] = 0;
        }
        return ans;
    }
};