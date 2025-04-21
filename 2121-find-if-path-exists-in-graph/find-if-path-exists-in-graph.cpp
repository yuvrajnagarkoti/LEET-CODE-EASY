class Solution {
public:
    bool validPath(int v, vector<vector<int>>& edges, int source, int destination) {
        // Step 1: Build adjacency list
        vector<vector<int>> adj(v);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);  // since it's an undirected graph
        }

        // Step 2: BFS
        vector<int> vis(v, 0);
        queue<int> q;
        vis[source] = 1;
        q.push(source);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            if (node == destination) return true;

            for (int neighbor : adj[node]) {
                if (!vis[neighbor]) {
                    vis[neighbor] = 1;
                    q.push(neighbor);
                }
            }
        }
        return false;
    }
};
