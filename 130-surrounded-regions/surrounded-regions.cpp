class Solution
{
public:
    void dfs(vector<vector<char>>& board,vector<vector<int>> &vis,int i,int j)
    {
        int m=board.size(),n=board[0].size();
        if(i < 0 || j < 0 || i >= m || j >= n || vis[i][j] || board[i][j] != 'O')
            return;

        vis[i][j] = 1;

        if( i+1 < m && board[i+1][j] == 'O')
            dfs(board,vis,i+1,j);
        if( j+1 < n && board[i][j+1] == 'O')
            dfs(board,vis,i,j+1);
        if( i-1 >= 0 && board[i-1][j] == 'O')
            dfs(board,vis,i-1,j);
        if( j-1 >= 0 && board[i][j-1] == 'O')
            dfs(board,vis,i,j-1);
    }
    void solve(vector<vector<char>>& board)
    {
        int m=board.size(),n=board[0].size();
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++)
        {
            if(board[i][0] == 'O')
                dfs(board,vis,i,0);
            if(board[i][n-1] == 'O')
                dfs(board,vis,i,n-1);
        }
        for(int j=0;j<n;j++)
        {
            if(board[0][j] == 'O')
                dfs(board,vis,0,j);
            if(board[m-1][j] == 'O')
                dfs(board,vis,m-1,j);
        }

        for(int i=1;i<m-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if(board[i][j] == 'O')
                {
                    if(vis[i][j] != 1)
                        board[i][j] = 'X';
                }
            }
        }
    }
};