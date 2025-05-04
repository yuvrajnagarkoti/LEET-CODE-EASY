class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        
        int n = dominoes.size();
        int key[10][10] = {0};
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int a = dominoes[i][0];
            int b = dominoes[i][1];
            if (a == b)
            {
                count += (key[a][b]);
            }
            else
            {
                count += (key[a][b] + key[b][a]);
            }  
            key[a][b]++;
        }
        return count;
    }
};