class Solution {
public:
    vector<int> getRow(int rowi)
    {
        vector<vector<int>> ans(rowi + 1);
        ans[0].push_back(1);
        int i=1;
        while( i<=rowi)
        {
            ans[i].push_back(1);

            int n=ans[i-1].size();
            for(int j=1;j<n;j++)
            {
                int temp = ans[i-1][j-1] + ans[i-1][j];
                ans[i].push_back(temp);
            }
            ans[i].push_back(1);
            i++;
        }
        return ans[rowi];
    }
};