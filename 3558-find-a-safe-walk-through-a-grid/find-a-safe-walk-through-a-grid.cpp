class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n = grid.size(), m = grid[0].size();

        vector<vector<int>> best(n, vector<int>(m, -1));
        queue<pair<pair<int,int>, int>> q;

        int startHealth = health - grid[0][0];
        if (startHealth <= 0)
            return false;

        q.push({{0, 0}, startHealth});
        best[0][0] = startHealth;

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto cur = q.front();
            q.pop();

            int x = cur.first.first;
            int y = cur.first.second;
            int remHealth = cur.second;

            if (x == n - 1 && y == m - 1)
                return true;

            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                    continue;

                int newHealth = remHealth - grid[nx][ny];

                if (newHealth <= 0)
                    continue;

                if (newHealth > best[nx][ny]) {
                    best[nx][ny] = newHealth;
                    q.push({{nx, ny}, newHealth});
                }
            }
        }

        return false;
    }
};