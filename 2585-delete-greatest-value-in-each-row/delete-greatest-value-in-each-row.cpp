class Solution
{
public:
    static bool compare(int a,int b)
    {
        return a > b;
    }

    int deleteGreatestValue(vector<vector<int>>& grid)
    {
        int m = grid.size(), n = grid[0].size();
        for(int i = 0; i < m; i++)
        {
            sort(grid[i].begin(), grid[i].end(), compare);
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int maxi = grid[0][i];
            for(int j = 1; j < m; j++)
            {
                maxi = max(maxi, grid[j][i]);
            }
            ans += maxi;
        }
        return ans;
    }
};
